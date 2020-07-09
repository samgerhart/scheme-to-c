#lang racket
(require "parenthec.rkt")

(define-program-counter pc)

(define-registers
  valof-exp* valof-env* valof-k*
  apply-closure-closure* apply-closure-a* apply-closure-k^*
  apply-env-env* apply-env-y* apply-env-k^*
  apply-k-k* apply-k-v*)

(define-union expr
  (const cexp)
  (var n)
  (if test conseq alt)
  (mult nexp1 nexp2)
  (sub1 nexp)
  (zero nexp)
  (letcc body)
  (throw kexp vexp)
  (let exp body)              
  (lambda body)
  (app rator rand))

(define-label value-of-cps
  (union-case valof-exp* expr
              [(const expr) (begin (set! apply-k-k* valof-k*)
                                   (set! apply-k-v* expr)
                                   (set! pc apply-k))]
              [(mult x1 x2) (begin (set! valof-exp* x1)
                                   (set! valof-env* valof-env*)
                                   (set! valof-k* (kt_mult-outer-k x2 valof-env* valof-k*))
                                   (set! pc value-of-cps))]
              [(sub1 x)     (begin (set! valof-exp* x)
                                   (set! valof-env* valof-env*)
                                   (set! valof-k* (kt_sub1-k valof-k*))
                                   (set! pc value-of-cps))]
              [(zero x)     (begin (set! valof-exp* x)
                                   (set! valof-env* valof-env*)
                                   (set! valof-k* (kt_zero-k valof-k*))
                                   (set! pc value-of-cps))]
              [(if test conseq alt) (begin (set! valof-exp* test)
                                           (set! valof-env* valof-env*)
                                           (set! valof-k* (kt_if-k test conseq alt valof-env* valof-k*))
                                           (set! pc value-of-cps))]
              [(letcc body)  (begin (set! valof-exp* body)
                                    (set! valof-env* (envr_ext-env valof-env* valof-k*))
                                    (set! valof-k* valof-k*)
                                    (set! pc value-of-cps))]
              [(throw k-exp v-exp) (begin (set! valof-exp* k-exp)
                                          (set! valof-env* valof-env*)
                                          (set! valof-k* (kt_throw-outer-k v-exp valof-env*))
                                          (set! pc value-of-cps))]
              [(let e body) (begin (set! valof-exp* e)
                                   (set! valof-env* valof-env*)
                                   (set! valof-k* (kt_let-k body valof-env* valof-k*))
                                   (set! pc value-of-cps))]
              [(var y)      (begin (set! apply-env-env* valof-env*)
                                   (set! apply-env-y* y)
                                   (set! apply-env-k^* valof-k*)
                                   (set! pc apply-env))]
              [(lambda body)    (begin (set! apply-k-k* valof-k*)
                                       (set! apply-k-v* (clos_make-closure body valof-env*))
                                       (set! pc apply-k))]
              [(app rator rand) (begin (set! valof-exp* rator)
                                       (set! valof-env* valof-env*)
                                       (set! valof-k* (kt_app-outer-k rand valof-env* valof-k*))
                                       (set! pc value-of-cps))]))

;;closure
(define-union clos
  (make-closure body^ env^))

(define-label apply-closure
    (union-case apply-closure-closure* clos
      [(make-closure body^ env^) (begin (set! valof-exp* body^)
                                        (set! valof-env* (envr_ext-env env^ apply-closure-a*))
                                        (set! valof-k* apply-closure-k^*)
                                        (set! pc value-of-cps))]))

;;environment

(define-union envr
  (ext-env env^ val^)
  (empty-env))

(define-label apply-env
    (union-case apply-env-env* envr
      [(empty-env) (error "no val for" apply-env-y*)]
      [(ext-env env^ val^)
       (if (zero? apply-env-y*)
           (begin (set! apply-k-k* apply-env-k^*)
                  (set! apply-k-v* val^)
                  (set! pc apply-k))
           (begin (set! apply-env-env* env^)
                  (set! apply-env-y* (sub1 apply-env-y*))
                  (set! apply-env-k^* apply-env-k^*)
                  (set! pc apply-env)))]))

;;continuations

(define-union kt
  (empty-k dismount)
  (mult-outer-k x2^ env^ k^)
  (mult-inner-k v1^ k^)
  (sub1-k k^)
  (zero-k k^)
  (if-k test^ conseq^ alt^ env^ k^)
  (throw-inner-k v1^)
  (throw-outer-k k-exp^ env^)
  (let-k body^ env^ k^)
  (app-inner-k v1^ k^)
  (app-outer-k rand^ env^ k^))

(define-label apply-k
    (union-case apply-k-k* kt
      [(empty-k dismount) (dismount-trampoline dismount)]
      [(mult-outer-k x2^ env^ k^) (begin (set! valof-exp* x2^)
                                         (set! valof-env* env^)
                                         (set! valof-k* (kt_mult-inner-k apply-k-v* k^))
                                         (set! pc value-of-cps))]
      [(mult-inner-k v1^ k^)      (begin (set! apply-k-k* k^)
                                         (set! apply-k-v* (* v1^ apply-k-v*))
                                         (set! pc apply-k))]
      [(sub1-k k^)                (begin (set! apply-k-k* k^)
                                         (set! apply-k-v* (sub1 apply-k-v*))
                                         (set! pc apply-k))]
      [(zero-k k^)                (begin (set! apply-k-k* k^) 
                                         (set! apply-k-v* (zero? apply-k-v*))
                                         (set! pc apply-k))]
      [(if-k test^ conseq^ alt^ env^ k^) (if apply-k-v*
                                            (begin (set! valof-exp* conseq^)
                                                   (set! valof-env* env^)
                                                   (set! valof-k* k^)
                                                   (set! pc value-of-cps))
                                            (begin (set! valof-exp* alt^)
                                                   (set! valof-env* env^)
                                                   (set! valof-k* k^)
                                                   (set! pc value-of-cps)))]
      [(throw-inner-k v1^)         (begin (set! apply-k-k* v1^)
                                          (set! apply-k-v* apply-k-v*)
                                          (set! pc apply-k))]
      [(throw-outer-k k-exp^ env^) (begin (set! valof-exp* k-exp^)
                                          (set! valof-env* env^)
                                          (set! valof-k* (kt_throw-inner-k apply-k-v*))
                                          (set! pc value-of-cps))]
      [(let-k body^ env^ k^)       (begin (set! valof-exp* body^)
                                          (set! valof-env* (envr_ext-env env^ apply-k-v*))
                                          (set! valof-k* k^)
                                          (set! pc value-of-cps))]
      [(app-inner-k v1^ k^)        (begin (set! apply-closure-closure* v1^)
                                          (set! apply-closure-a* apply-k-v*)
                                          (set! apply-closure-k^* k^)
                                          (set! pc apply-closure))]
      [(app-outer-k rand^ env^ k^) (begin (set! valof-exp* rand^)
                                          (set! valof-env* env^)
                                          (set! valof-k* (kt_app-inner-k apply-k-v* k^))
                                          (set! pc value-of-cps))]))

(define-label main 
    (begin (set! valof-exp* (expr_let 
                              (expr_lambda
                               (expr_lambda 
                                (expr_if
                                 (expr_zero (expr_var 0))
                                 (expr_const 1)
                                 (expr_mult (expr_var 0)
                                            (expr_app (expr_app (expr_var 1) (expr_var 1))
                                                      (expr_sub1 (expr_var 0)))))))
                              (expr_mult
                               (expr_letcc
                                (expr_app
                                 (expr_app (expr_var 1) (expr_var 1))
                                 (expr_throw (expr_var 0)
                                             (expr_app (expr_app (expr_var 1)
                                                                 (expr_var 1))
                                                       (expr_const 4)))))
                               (expr_const 5)))) 
     (set! valof-env* (envr_empty-env))
     (set! valof-k* (kt_empty-k apply-k-v*))
     (set! pc value-of-cps)
     (mount-trampoline kt_empty-k valof-k* pc)
     (printf "fact of five equals ~s\n" apply-k-v*)))

(main)