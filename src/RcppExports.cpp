// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// log_pl_calc
double log_pl_calc(arma::mat data, Rcpp::List L);
RcppExport SEXP _BoltzMM_log_pl_calc(SEXP dataSEXP, SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(log_pl_calc(data, L));
    return rcpp_result_gen;
END_RCPP
}
// pfvbm
double pfvbm(arma::vec xval, arma::vec bvec, arma::mat Mmat);
RcppExport SEXP _BoltzMM_pfvbm(SEXP xvalSEXP, SEXP bvecSEXP, SEXP MmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type xval(xvalSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bvec(bvecSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Mmat(MmatSEXP);
    rcpp_result_gen = Rcpp::wrap(pfvbm(xval, bvec, Mmat));
    return rcpp_result_gen;
END_RCPP
}
// allpfvbm
arma::rowvec allpfvbm(arma::vec bvec, arma::mat Mmat);
RcppExport SEXP _BoltzMM_allpfvbm(SEXP bvecSEXP, SEXP MmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type bvec(bvecSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Mmat(MmatSEXP);
    rcpp_result_gen = Rcpp::wrap(allpfvbm(bvec, Mmat));
    return rcpp_result_gen;
END_RCPP
}
// rfvbm
arma::mat rfvbm(int num, arma::vec bvec, arma::mat Mmat);
RcppExport SEXP _BoltzMM_rfvbm(SEXP numSEXP, SEXP bvecSEXP, SEXP MmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type num(numSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bvec(bvecSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Mmat(MmatSEXP);
    rcpp_result_gen = Rcpp::wrap(rfvbm(num, bvec, Mmat));
    return rcpp_result_gen;
END_RCPP
}
// fitfvbm
Rcpp::List fitfvbm(arma::mat data, arma::vec bvec, arma::mat Mmat, double delta_crit, int max_it);
RcppExport SEXP _BoltzMM_fitfvbm(SEXP dataSEXP, SEXP bvecSEXP, SEXP MmatSEXP, SEXP delta_critSEXP, SEXP max_itSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bvec(bvecSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Mmat(MmatSEXP);
    Rcpp::traits::input_parameter< double >::type delta_crit(delta_critSEXP);
    Rcpp::traits::input_parameter< int >::type max_it(max_itSEXP);
    rcpp_result_gen = Rcpp::wrap(fitfvbm(data, bvec, Mmat, delta_crit, max_it));
    return rcpp_result_gen;
END_RCPP
}
// fvbmpartiald
Rcpp::List fvbmpartiald(arma::mat data, Rcpp::List model);
RcppExport SEXP _BoltzMM_fvbmpartiald(SEXP dataSEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(fvbmpartiald(data, model));
    return rcpp_result_gen;
END_RCPP
}
// fvbmcov
arma::mat fvbmcov(arma::mat data, Rcpp::List model, Rcpp::Function fvbmHess);
RcppExport SEXP _BoltzMM_fvbmcov(SEXP dataSEXP, SEXP modelSEXP, SEXP fvbmHessSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type fvbmHess(fvbmHessSEXP);
    rcpp_result_gen = Rcpp::wrap(fvbmcov(data, model, fvbmHess));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BoltzMM_log_pl_calc", (DL_FUNC) &_BoltzMM_log_pl_calc, 2},
    {"_BoltzMM_pfvbm", (DL_FUNC) &_BoltzMM_pfvbm, 3},
    {"_BoltzMM_allpfvbm", (DL_FUNC) &_BoltzMM_allpfvbm, 2},
    {"_BoltzMM_rfvbm", (DL_FUNC) &_BoltzMM_rfvbm, 3},
    {"_BoltzMM_fitfvbm", (DL_FUNC) &_BoltzMM_fitfvbm, 5},
    {"_BoltzMM_fvbmpartiald", (DL_FUNC) &_BoltzMM_fvbmpartiald, 2},
    {"_BoltzMM_fvbmcov", (DL_FUNC) &_BoltzMM_fvbmcov, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_BoltzMM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
