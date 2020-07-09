void (*pc)();

void *valofr__m__expr__t__, *valofr__m__envr__t__, *valofr__m__kr__t__, *applyr__m__closurer__m__closurer__t__, *applyr__m__closurer__m__ar__t__, *applyr__m__closurer__m__kr__ex__r__t__, *applyr__m__envr__m__envr__t__, *applyr__m__envr__m__yr__t__, *applyr__m__envr__m__kr__ex__r__t__, *applyr__m__kr__m__kr__t__, *applyr__m__kr__m__vr__t__;

struct expr;
typedef struct expr expr;
struct expr {
  enum {
    _const_expr,
    _var_expr,
    _if_expr,
    _mult_expr,
    _subr1_expr,
    _zero_expr,
    _letcc_expr,
    _throw_expr,
    _let_expr,
    _lambda_expr,
    _app_expr
  } tag;
  union {
    struct { void *_cexp; } _const;
    struct { void *_n; } _var;
    struct { void *_test; void *_conseq; void *_alt; } _if;
    struct { void *_nexpr1; void *_nexpr2; } _mult;
    struct { void *_nexp; } _subr1;
    struct { void *_nexp; } _zero;
    struct { void *_body; } _letcc;
    struct { void *_kexp; void *_vexp; } _throw;
    struct { void *_exp; void *_body; } _let;
    struct { void *_body; } _lambda;
    struct { void *_rator; void *_rand; } _app;
  } u;
};

void *exprr_const(void *cexp);
void *exprr_var(void *n);
void *exprr_if(void *test, void *conseq, void *alt);
void *exprr_mult(void *nexpr1, void *nexpr2);
void *exprr_subr1(void *nexp);
void *exprr_zero(void *nexp);
void *exprr_letcc(void *body);
void *exprr_throw(void *kexp, void *vexp);
void *exprr_let(void *exp, void *body);
void *exprr_lambda(void *body);
void *exprr_app(void *rator, void *rand);

void valuer__m__ofr__m__cps();
struct clos;
typedef struct clos clos;
struct clos {
  enum {
    _maker__m__closure_clos
  } tag;
  union {
    struct { void *_bodyr__ex__; void *_envr__ex__; } _maker__m__closure;
  } u;
};

void *closr_maker__m__closure(void *bodyr__ex__, void *envr__ex__);

void applyr__m__closure();
struct envr;
typedef struct envr envr;
struct envr {
  enum {
    _extr__m__env_envr,
    _emptyr__m__env_envr
  } tag;
  union {
    struct { void *_envr__ex__; void *_valr__ex__; } _extr__m__env;
    struct { char dummy; } _emptyr__m__env;
  } u;
};

void *envrr_extr__m__env(void *envr__ex__, void *valr__ex__);
void *envrr_emptyr__m__env();

void applyr__m__env();
struct kt;
typedef struct kt kt;
struct kt {
  enum {
    _emptyr__m__k_kt,
    _multr__m__outerr__m__k_kt,
    _multr__m__innerr__m__k_kt,
    _subr1r__m__k_kt,
    _zeror__m__k_kt,
    _ifr__m__k_kt,
    _throwr__m__innerr__m__k_kt,
    _throwr__m__outerr__m__k_kt,
    _letr__m__k_kt,
    _appr__m__innerr__m__k_kt,
    _appr__m__outerr__m__k_kt
  } tag;
  union {
    struct { void *_dismount; } _emptyr__m__k;
    struct { void *_xr2r__ex__; void *_envr__ex__; void *_kr__ex__; } _multr__m__outerr__m__k;
    struct { void *_vr1r__ex__; void *_kr__ex__; } _multr__m__innerr__m__k;
    struct { void *_kr__ex__; } _subr1r__m__k;
    struct { void *_kr__ex__; } _zeror__m__k;
    struct { void *_testr__ex__; void *_conseqr__ex__; void *_altr__ex__; void *_envr__ex__; void *_kr__ex__; } _ifr__m__k;
    struct { void *_vr1r__ex__; } _throwr__m__innerr__m__k;
    struct { void *_kr__m__expr__ex__; void *_envr__ex__; } _throwr__m__outerr__m__k;
    struct { void *_bodyr__ex__; void *_envr__ex__; void *_kr__ex__; } _letr__m__k;
    struct { void *_vr1r__ex__; void *_kr__ex__; } _appr__m__innerr__m__k;
    struct { void *_randr__ex__; void *_envr__ex__; void *_kr__ex__; } _appr__m__outerr__m__k;
  } u;
};

void *ktr_emptyr__m__k(void *dismount);
void *ktr_multr__m__outerr__m__k(void *xr2r__ex__, void *envr__ex__, void *kr__ex__);
void *ktr_multr__m__innerr__m__k(void *vr1r__ex__, void *kr__ex__);
void *ktr_subr1r__m__k(void *kr__ex__);
void *ktr_zeror__m__k(void *kr__ex__);
void *ktr_ifr__m__k(void *testr__ex__, void *conseqr__ex__, void *altr__ex__, void *envr__ex__, void *kr__ex__);
void *ktr_throwr__m__innerr__m__k(void *vr1r__ex__);
void *ktr_throwr__m__outerr__m__k(void *kr__m__expr__ex__, void *envr__ex__);
void *ktr_letr__m__k(void *bodyr__ex__, void *envr__ex__, void *kr__ex__);
void *ktr_appr__m__innerr__m__k(void *vr1r__ex__, void *kr__ex__);
void *ktr_appr__m__outerr__m__k(void *randr__ex__, void *envr__ex__, void *kr__ex__);

void applyr__m__k();
int main();
int mount_tram();

struct _trstr;
typedef struct _trstr _trstr;
struct _trstr {
  jmp_buf *jmpbuf;
  int value;
};

