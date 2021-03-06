#include <R.h>
#include <Rinternals.h>

#include <R_ext/Rdynload.h>

SEXP skewness(SEXP x);
SEXP kurtosis(SEXP x);
SEXP jarquebera(SEXP x);
SEXP rn(SEXP n, SEXP mu, SEXP sd, SEXP nthreads);
SEXP rln(SEXP n, SEXP mu, SEXP sd);
SEXP rbrownian(SEXP n, SEXP m, SEXP mu, SEXP sd, SEXP T, SEXP B0, SEXP drop, SEXP nthreads);

SEXP colMaxs(SEXP M);
SEXP rowMaxs(SEXP M);
SEXP colMins(SEXP M);
SEXP rowMins(SEXP M);

SEXP lbound(SEXP x, SEXP m);
SEXP ubound(SEXP x, SEXP m);
SEXP bound(SEXP x, SEXP m1, SEXP m2);

SEXP rvasicek(SEXP n, SEXP m, SEXP X0, SEXP mu, SEXP a, SEXP sd, SEXP T, SEXP drop);
SEXP dvasicek(SEXP X, SEXP mu, SEXP a, SEXP sd, SEXP T, SEXP log);
SEXP lvasicek(SEXP X, SEXP mu, SEXP a, SEXP sd, SEXP T);

SEXP re(SEXP n, SEXP lambda);
SEXP rtt(SEXP n, SEXP df);
SEXP rg(SEXP n, SEXP p);
SEXP rb(SEXP n, SEXP p);
SEXP rc(SEXP n);
SEXP rgpd(SEXP n, SEXP ksi, SEXP mu, SEXP sigma);

SEXP rpoisson(SEXP n, SEXP lambda, SEXP T, SEXP drop);
SEXP evalpoisson(SEXP P, SEXP t);

SEXP mt_set_seed(SEXP);
SEXP getmaxthreads();

R_CallMethodDef callMethods[]  = {
  {".C_skewness", (DL_FUNC) &skewness, 1},
  {".C_kurtosis", (DL_FUNC) &kurtosis, 1},
  {".C_jarquebera", (DL_FUNC) &jarquebera, 1},
  {".C_rn", (DL_FUNC) &rn, 4},
  {".C_rln", (DL_FUNC) &rln, 3},
  {".C_rtt", (DL_FUNC) &rtt, 2},
  {".C_rbrownian", (DL_FUNC) &rbrownian, 8},

  {".C_colMaxs", (DL_FUNC) &colMaxs, 1},
  {".C_rowMaxs", (DL_FUNC) &rowMaxs, 1},
  {".C_colMins", (DL_FUNC) &colMins, 1},
  {".C_rowMins", (DL_FUNC) &rowMins, 1},

  {".C_lbound", (DL_FUNC) &lbound, 2},
  {".C_ubound", (DL_FUNC) &ubound, 2},
  {".C_bound", (DL_FUNC) &bound, 3},

  {".C_rvasicek", (DL_FUNC) &rvasicek, 8},
  {".C_dvasicek", (DL_FUNC) &dvasicek, 6},
  {".C_lvasicek", (DL_FUNC) &lvasicek, 5},

  {".C_re", (DL_FUNC) &re, 2},
  {".C_rg", (DL_FUNC) &rg, 2},
  {".C_rb", (DL_FUNC) &rb, 2},
  {".C_rc", (DL_FUNC) &rc, 1},
  {".C_rgpd", (DL_FUNC) &rgpd, 4},
  
  {".C_rpoisson", (DL_FUNC) &rpoisson, 4},
  {".C_evalpoisson", (DL_FUNC) &evalpoisson, 2},
  
  {".C_mt_set_seed", (DL_FUNC) &mt_set_seed, 1},
  {".C_getmaxthreads", (DL_FUNC) &getmaxthreads, 0},
  
  {NULL, NULL, 0}
};

void R_init_rpgm(DllInfo *info) {
  R_registerRoutines(info, NULL, callMethods, NULL, NULL);
  R_useDynamicSymbols(info, FALSE);
}

