#include <setjmp.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "a9.h"

void *ktr_emptyr__m__k(void *dismount) {
kt* _data = (kt*)malloc(sizeof(kt));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _emptyr__m__k_kt;
  _data->u._emptyr__m__k._dismount = dismount;
  return (void *)_data;
}

void *ktr_multr__m__outerr__m__k(void *xr2r__ex__, void *envr__ex__, void *kr__ex__) {
kt* _data = (kt*)malloc(sizeof(kt));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _multr__m__outerr__m__k_kt;
  _data->u._multr__m__outerr__m__k._xr2r__ex__ = xr2r__ex__;
  _data->u._multr__m__outerr__m__k._envr__ex__ = envr__ex__;
  _data->u._multr__m__outerr__m__k._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *ktr_multr__m__innerr__m__k(void *vr1r__ex__, void *kr__ex__) {
kt* _data = (kt*)malloc(sizeof(kt));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _multr__m__innerr__m__k_kt;
  _data->u._multr__m__innerr__m__k._vr1r__ex__ = vr1r__ex__;
  _data->u._multr__m__innerr__m__k._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *ktr_subr1r__m__k(void *kr__ex__) {
kt* _data = (kt*)malloc(sizeof(kt));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _subr1r__m__k_kt;
  _data->u._subr1r__m__k._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *ktr_zeror__m__k(void *kr__ex__) {
kt* _data = (kt*)malloc(sizeof(kt));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _zeror__m__k_kt;
  _data->u._zeror__m__k._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *ktr_ifr__m__k(void *testr__ex__, void *conseqr__ex__, void *altr__ex__, void *envr__ex__, void *kr__ex__) {
kt* _data = (kt*)malloc(sizeof(kt));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _ifr__m__k_kt;
  _data->u._ifr__m__k._testr__ex__ = testr__ex__;
  _data->u._ifr__m__k._conseqr__ex__ = conseqr__ex__;
  _data->u._ifr__m__k._altr__ex__ = altr__ex__;
  _data->u._ifr__m__k._envr__ex__ = envr__ex__;
  _data->u._ifr__m__k._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *ktr_throwr__m__innerr__m__k(void *vr1r__ex__) {
kt* _data = (kt*)malloc(sizeof(kt));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _throwr__m__innerr__m__k_kt;
  _data->u._throwr__m__innerr__m__k._vr1r__ex__ = vr1r__ex__;
  return (void *)_data;
}

void *ktr_throwr__m__outerr__m__k(void *kr__m__expr__ex__, void *envr__ex__) {
kt* _data = (kt*)malloc(sizeof(kt));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _throwr__m__outerr__m__k_kt;
  _data->u._throwr__m__outerr__m__k._kr__m__expr__ex__ = kr__m__expr__ex__;
  _data->u._throwr__m__outerr__m__k._envr__ex__ = envr__ex__;
  return (void *)_data;
}

void *ktr_letr__m__k(void *bodyr__ex__, void *envr__ex__, void *kr__ex__) {
kt* _data = (kt*)malloc(sizeof(kt));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _letr__m__k_kt;
  _data->u._letr__m__k._bodyr__ex__ = bodyr__ex__;
  _data->u._letr__m__k._envr__ex__ = envr__ex__;
  _data->u._letr__m__k._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *ktr_appr__m__innerr__m__k(void *vr1r__ex__, void *kr__ex__) {
kt* _data = (kt*)malloc(sizeof(kt));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _appr__m__innerr__m__k_kt;
  _data->u._appr__m__innerr__m__k._vr1r__ex__ = vr1r__ex__;
  _data->u._appr__m__innerr__m__k._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *ktr_appr__m__outerr__m__k(void *randr__ex__, void *envr__ex__, void *kr__ex__) {
kt* _data = (kt*)malloc(sizeof(kt));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _appr__m__outerr__m__k_kt;
  _data->u._appr__m__outerr__m__k._randr__ex__ = randr__ex__;
  _data->u._appr__m__outerr__m__k._envr__ex__ = envr__ex__;
  _data->u._appr__m__outerr__m__k._kr__ex__ = kr__ex__;
  return (void *)_data;
}

void *envrr_extr__m__env(void *envr__ex__, void *valr__ex__) {
envr* _data = (envr*)malloc(sizeof(envr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _extr__m__env_envr;
  _data->u._extr__m__env._envr__ex__ = envr__ex__;
  _data->u._extr__m__env._valr__ex__ = valr__ex__;
  return (void *)_data;
}

void *envrr_emptyr__m__env() {
envr* _data = (envr*)malloc(sizeof(envr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _emptyr__m__env_envr;
  return (void *)_data;
}

void *closr_maker__m__closure(void *bodyr__ex__, void *envr__ex__) {
clos* _data = (clos*)malloc(sizeof(clos));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _maker__m__closure_clos;
  _data->u._maker__m__closure._bodyr__ex__ = bodyr__ex__;
  _data->u._maker__m__closure._envr__ex__ = envr__ex__;
  return (void *)_data;
}

void *exprr_const(void *cexp) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _const_expr;
  _data->u._const._cexp = cexp;
  return (void *)_data;
}

void *exprr_var(void *n) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _var_expr;
  _data->u._var._n = n;
  return (void *)_data;
}

void *exprr_if(void *test, void *conseq, void *alt) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _if_expr;
  _data->u._if._test = test;
  _data->u._if._conseq = conseq;
  _data->u._if._alt = alt;
  return (void *)_data;
}

void *exprr_mult(void *nexpr1, void *nexpr2) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _mult_expr;
  _data->u._mult._nexpr1 = nexpr1;
  _data->u._mult._nexpr2 = nexpr2;
  return (void *)_data;
}

void *exprr_subr1(void *nexp) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _subr1_expr;
  _data->u._subr1._nexp = nexp;
  return (void *)_data;
}

void *exprr_zero(void *nexp) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _zero_expr;
  _data->u._zero._nexp = nexp;
  return (void *)_data;
}

void *exprr_letcc(void *body) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _letcc_expr;
  _data->u._letcc._body = body;
  return (void *)_data;
}

void *exprr_throw(void *kexp, void *vexp) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _throw_expr;
  _data->u._throw._kexp = kexp;
  _data->u._throw._vexp = vexp;
  return (void *)_data;
}

void *exprr_let(void *exp, void *body) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _let_expr;
  _data->u._let._exp = exp;
  _data->u._let._body = body;
  return (void *)_data;
}

void *exprr_lambda(void *body) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _lambda_expr;
  _data->u._lambda._body = body;
  return (void *)_data;
}

void *exprr_app(void *rator, void *rand) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _app_expr;
  _data->u._app._rator = rator;
  _data->u._app._rand = rand;
  return (void *)_data;
}

int main()
{
valofr__m__expr__t__ = (void *)exprr_let(exprr_lambda(exprr_lambda(exprr_if(exprr_zero(exprr_var((void *)0)),exprr_const((void *)1),exprr_mult(exprr_var((void *)0),exprr_app(exprr_app(exprr_var((void *)1),exprr_var((void *)1)),exprr_subr1(exprr_var((void *)0))))))),exprr_mult(exprr_letcc(exprr_app(exprr_app(exprr_var((void *)1),exprr_var((void *)1)),exprr_throw(exprr_var((void *)0),exprr_app(exprr_app(exprr_var((void *)1),exprr_var((void *)1)),exprr_const((void *)4))))),exprr_const((void *)5)));
valofr__m__envr__t__ = (void *)envrr_emptyr__m__env();
valofr__m__kr__t__ = (void *)ktr_emptyr__m__k(applyr__m__kr__m__vr__t__);
pc = &valuer__m__ofr__m__cps;
mount_tram();
printf("fact of five equals %d\n", (int)applyr__m__kr__m__vr__t__);}

void applyr__m__k()
{
kt* _c = (kt*)applyr__m__kr__m__kr__t__;
switch (_c->tag) {
case _emptyr__m__k_kt: {
void *dismount = _c->u._emptyr__m__k._dismount;
_trstr *trstr = (_trstr *)dismount;
longjmp(*trstr->jmpbuf, 1);
break; }
case _multr__m__outerr__m__k_kt: {
void *xr2r__ex__ = _c->u._multr__m__outerr__m__k._xr2r__ex__;
void *envr__ex__ = _c->u._multr__m__outerr__m__k._envr__ex__;
void *kr__ex__ = _c->u._multr__m__outerr__m__k._kr__ex__;
valofr__m__expr__t__ = (void *)xr2r__ex__;
valofr__m__envr__t__ = (void *)envr__ex__;
valofr__m__kr__t__ = (void *)ktr_multr__m__innerr__m__k(applyr__m__kr__m__vr__t__,kr__ex__);
pc = &valuer__m__ofr__m__cps;
break; }
case _multr__m__innerr__m__k_kt: {
void *vr1r__ex__ = _c->u._multr__m__innerr__m__k._vr1r__ex__;
void *kr__ex__ = _c->u._multr__m__innerr__m__k._kr__ex__;
applyr__m__kr__m__kr__t__ = (void *)kr__ex__;
applyr__m__kr__m__vr__t__ = (void *)(void *)((int)vr1r__ex__ * (int)applyr__m__kr__m__vr__t__);
pc = &applyr__m__k;
break; }
case _subr1r__m__k_kt: {
void *kr__ex__ = _c->u._subr1r__m__k._kr__ex__;
applyr__m__kr__m__kr__t__ = (void *)kr__ex__;
applyr__m__kr__m__vr__t__ = (void *)(void *)((int)applyr__m__kr__m__vr__t__ - 1);
pc = &applyr__m__k;
break; }
case _zeror__m__k_kt: {
void *kr__ex__ = _c->u._zeror__m__k._kr__ex__;
applyr__m__kr__m__kr__t__ = (void *)kr__ex__;
applyr__m__kr__m__vr__t__ = (void *)(applyr__m__kr__m__vr__t__ == 0);
pc = &applyr__m__k;
break; }
case _ifr__m__k_kt: {
void *testr__ex__ = _c->u._ifr__m__k._testr__ex__;
void *conseqr__ex__ = _c->u._ifr__m__k._conseqr__ex__;
void *altr__ex__ = _c->u._ifr__m__k._altr__ex__;
void *envr__ex__ = _c->u._ifr__m__k._envr__ex__;
void *kr__ex__ = _c->u._ifr__m__k._kr__ex__;
if(applyr__m__kr__m__vr__t__) {
  valofr__m__expr__t__ = (void *)conseqr__ex__;
valofr__m__envr__t__ = (void *)envr__ex__;
valofr__m__kr__t__ = (void *)kr__ex__;
pc = &valuer__m__ofr__m__cps;

} else {
  valofr__m__expr__t__ = (void *)altr__ex__;
valofr__m__envr__t__ = (void *)envr__ex__;
valofr__m__kr__t__ = (void *)kr__ex__;
pc = &valuer__m__ofr__m__cps;

}
break; }
case _throwr__m__innerr__m__k_kt: {
void *vr1r__ex__ = _c->u._throwr__m__innerr__m__k._vr1r__ex__;
applyr__m__kr__m__kr__t__ = (void *)vr1r__ex__;
pc = &applyr__m__k;
break; }
case _throwr__m__outerr__m__k_kt: {
void *kr__m__expr__ex__ = _c->u._throwr__m__outerr__m__k._kr__m__expr__ex__;
void *envr__ex__ = _c->u._throwr__m__outerr__m__k._envr__ex__;
valofr__m__expr__t__ = (void *)kr__m__expr__ex__;
valofr__m__envr__t__ = (void *)envr__ex__;
valofr__m__kr__t__ = (void *)ktr_throwr__m__innerr__m__k(applyr__m__kr__m__vr__t__);
pc = &valuer__m__ofr__m__cps;
break; }
case _letr__m__k_kt: {
void *bodyr__ex__ = _c->u._letr__m__k._bodyr__ex__;
void *envr__ex__ = _c->u._letr__m__k._envr__ex__;
void *kr__ex__ = _c->u._letr__m__k._kr__ex__;
valofr__m__expr__t__ = (void *)bodyr__ex__;
valofr__m__envr__t__ = (void *)envrr_extr__m__env(envr__ex__,applyr__m__kr__m__vr__t__);
valofr__m__kr__t__ = (void *)kr__ex__;
pc = &valuer__m__ofr__m__cps;
break; }
case _appr__m__innerr__m__k_kt: {
void *vr1r__ex__ = _c->u._appr__m__innerr__m__k._vr1r__ex__;
void *kr__ex__ = _c->u._appr__m__innerr__m__k._kr__ex__;
applyr__m__closurer__m__closurer__t__ = (void *)vr1r__ex__;
applyr__m__closurer__m__ar__t__ = (void *)applyr__m__kr__m__vr__t__;
applyr__m__closurer__m__kr__ex__r__t__ = (void *)kr__ex__;
pc = &applyr__m__closure;
break; }
case _appr__m__outerr__m__k_kt: {
void *randr__ex__ = _c->u._appr__m__outerr__m__k._randr__ex__;
void *envr__ex__ = _c->u._appr__m__outerr__m__k._envr__ex__;
void *kr__ex__ = _c->u._appr__m__outerr__m__k._kr__ex__;
valofr__m__expr__t__ = (void *)randr__ex__;
valofr__m__envr__t__ = (void *)envr__ex__;
valofr__m__kr__t__ = (void *)ktr_appr__m__innerr__m__k(applyr__m__kr__m__vr__t__,kr__ex__);
pc = &valuer__m__ofr__m__cps;
break; }
}
}

void applyr__m__env()
{
envr* _c = (envr*)applyr__m__envr__m__envr__t__;
switch (_c->tag) {
case _emptyr__m__env_envr: {
fprintf(stderr, "apply-env-y*");
 exit(1);
break; }
case _extr__m__env_envr: {
void *envr__ex__ = _c->u._extr__m__env._envr__ex__;
void *valr__ex__ = _c->u._extr__m__env._valr__ex__;
if((applyr__m__envr__m__yr__t__ == 0)) {
  applyr__m__kr__m__kr__t__ = (void *)applyr__m__envr__m__kr__ex__r__t__;
applyr__m__kr__m__vr__t__ = (void *)valr__ex__;
pc = &applyr__m__k;

} else {
  applyr__m__envr__m__envr__t__ = (void *)envr__ex__;
applyr__m__envr__m__yr__t__ = (void *)(void *)((int)applyr__m__envr__m__yr__t__ - 1);
pc = &applyr__m__env;

}
break; }
}
}

void applyr__m__closure()
{
clos* _c = (clos*)applyr__m__closurer__m__closurer__t__;
switch (_c->tag) {
case _maker__m__closure_clos: {
void *bodyr__ex__ = _c->u._maker__m__closure._bodyr__ex__;
void *envr__ex__ = _c->u._maker__m__closure._envr__ex__;
valofr__m__expr__t__ = (void *)bodyr__ex__;
valofr__m__envr__t__ = (void *)envrr_extr__m__env(envr__ex__,applyr__m__closurer__m__ar__t__);
valofr__m__kr__t__ = (void *)applyr__m__closurer__m__kr__ex__r__t__;
pc = &valuer__m__ofr__m__cps;
break; }
}
}

void valuer__m__ofr__m__cps()
{
expr* _c = (expr*)valofr__m__expr__t__;
switch (_c->tag) {
case _const_expr: {
void *expr = _c->u._const._cexp;
applyr__m__kr__m__kr__t__ = (void *)valofr__m__kr__t__;
applyr__m__kr__m__vr__t__ = (void *)expr;
pc = &applyr__m__k;
break; }
case _mult_expr: {
void *xr1 = _c->u._mult._nexpr1;
void *xr2 = _c->u._mult._nexpr2;
valofr__m__expr__t__ = (void *)xr1;
valofr__m__kr__t__ = (void *)ktr_multr__m__outerr__m__k(xr2,valofr__m__envr__t__,valofr__m__kr__t__);
pc = &valuer__m__ofr__m__cps;
break; }
case _subr1_expr: {
void *x = _c->u._subr1._nexp;
valofr__m__expr__t__ = (void *)x;
valofr__m__kr__t__ = (void *)ktr_subr1r__m__k(valofr__m__kr__t__);
pc = &valuer__m__ofr__m__cps;
break; }
case _zero_expr: {
void *x = _c->u._zero._nexp;
valofr__m__expr__t__ = (void *)x;
valofr__m__kr__t__ = (void *)ktr_zeror__m__k(valofr__m__kr__t__);
pc = &valuer__m__ofr__m__cps;
break; }
case _if_expr: {
void *test = _c->u._if._test;
void *conseq = _c->u._if._conseq;
void *alt = _c->u._if._alt;
valofr__m__expr__t__ = (void *)test;
valofr__m__kr__t__ = (void *)ktr_ifr__m__k(test,conseq,alt,valofr__m__envr__t__,valofr__m__kr__t__);
pc = &valuer__m__ofr__m__cps;
break; }
case _letcc_expr: {
void *body = _c->u._letcc._body;
valofr__m__expr__t__ = (void *)body;
valofr__m__envr__t__ = (void *)envrr_extr__m__env(valofr__m__envr__t__,valofr__m__kr__t__);
pc = &valuer__m__ofr__m__cps;
break; }
case _throw_expr: {
void *kr__m__exp = _c->u._throw._kexp;
void *vr__m__exp = _c->u._throw._vexp;
valofr__m__expr__t__ = (void *)kr__m__exp;
valofr__m__kr__t__ = (void *)ktr_throwr__m__outerr__m__k(vr__m__exp,valofr__m__envr__t__);
pc = &valuer__m__ofr__m__cps;
break; }
case _let_expr: {
void *e = _c->u._let._exp;
void *body = _c->u._let._body;
valofr__m__expr__t__ = (void *)e;
valofr__m__kr__t__ = (void *)ktr_letr__m__k(body,valofr__m__envr__t__,valofr__m__kr__t__);
pc = &valuer__m__ofr__m__cps;
break; }
case _var_expr: {
void *y = _c->u._var._n;
applyr__m__envr__m__envr__t__ = (void *)valofr__m__envr__t__;
applyr__m__envr__m__yr__t__ = (void *)y;
applyr__m__envr__m__kr__ex__r__t__ = (void *)valofr__m__kr__t__;
pc = &applyr__m__env;
break; }
case _lambda_expr: {
void *body = _c->u._lambda._body;
applyr__m__kr__m__kr__t__ = (void *)valofr__m__kr__t__;
applyr__m__kr__m__vr__t__ = (void *)closr_maker__m__closure(body,valofr__m__envr__t__);
pc = &applyr__m__k;
break; }
case _app_expr: {
void *rator = _c->u._app._rator;
void *rand = _c->u._app._rand;
valofr__m__expr__t__ = (void *)rator;
valofr__m__kr__t__ = (void *)ktr_appr__m__outerr__m__k(rand,valofr__m__envr__t__,valofr__m__kr__t__);
pc = &valuer__m__ofr__m__cps;
break; }
}
}

int mount_tram ()
{
srand (time (NULL));
jmp_buf jb;
_trstr trstr;
void *dismount;
int _status = setjmp(jb);
trstr.jmpbuf = &jb;
dismount = &trstr;
if(!_status) {
valofr__m__kr__t__= (void *)ktr_emptyr__m__k(dismount);
for(;;) {
pc();
}
}
return 0;
}
