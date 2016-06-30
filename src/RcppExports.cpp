// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/ECctmc.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// sample_path_mr
arma::mat sample_path_mr(const int a, const int b, const double t0, const double t1, const Rcpp::NumericMatrix Q);
static SEXP ECctmc_sample_path_mr_try(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< const int >::type a(aSEXP);
    Rcpp::traits::input_parameter< const int >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< const double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type Q(QSEXP);
    __result = Rcpp::wrap(sample_path_mr(a, b, t0, t1, Q));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP ECctmc_sample_path_mr(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(ECctmc_sample_path_mr_try(aSEXP, bSEXP, t0SEXP, t1SEXP, QSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// sample_path_unif
arma::mat sample_path_unif(const int a, const int b, const double t0, const double t1, const arma::mat Q);
static SEXP ECctmc_sample_path_unif_try(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< const int >::type a(aSEXP);
    Rcpp::traits::input_parameter< const int >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< const double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Q(QSEXP);
    __result = Rcpp::wrap(sample_path_unif(a, b, t0, t1, Q));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP ECctmc_sample_path_unif(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(ECctmc_sample_path_unif_try(aSEXP, bSEXP, t0SEXP, t1SEXP, QSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// sample_path_unif2
arma::mat sample_path_unif2(const int a, const int b, const double t0, const double t1, const arma::mat Q, const arma::vec eigen_vals, const arma::mat eigen_vecs, const arma::mat inverse_vecs);
static SEXP ECctmc_sample_path_unif2_try(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP, SEXP eigen_valsSEXP, SEXP eigen_vecsSEXP, SEXP inverse_vecsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< const int >::type a(aSEXP);
    Rcpp::traits::input_parameter< const int >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< const double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type eigen_vals(eigen_valsSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type eigen_vecs(eigen_vecsSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type inverse_vecs(inverse_vecsSEXP);
    __result = Rcpp::wrap(sample_path_unif2(a, b, t0, t1, Q, eigen_vals, eigen_vecs, inverse_vecs));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP ECctmc_sample_path_unif2(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP, SEXP eigen_valsSEXP, SEXP eigen_vecsSEXP, SEXP inverse_vecsSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(ECctmc_sample_path_unif2_try(aSEXP, bSEXP, t0SEXP, t1SEXP, QSEXP, eigen_valsSEXP, eigen_vecsSEXP, inverse_vecsSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}

// validate (ensure exported C++ functions exist before calling them)
static int ECctmc_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("arma::mat(*sample_path_mr)(const int,const int,const double,const double,const Rcpp::NumericMatrix)");
        signatures.insert("arma::mat(*sample_path_unif)(const int,const int,const double,const double,const arma::mat)");
        signatures.insert("arma::mat(*sample_path_unif2)(const int,const int,const double,const double,const arma::mat,const arma::vec,const arma::mat,const arma::mat)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP ECctmc_RcppExport_registerCCallable() { 
    R_RegisterCCallable("ECctmc", "ECctmc_sample_path_mr", (DL_FUNC)ECctmc_sample_path_mr_try);
    R_RegisterCCallable("ECctmc", "ECctmc_sample_path_unif", (DL_FUNC)ECctmc_sample_path_unif_try);
    R_RegisterCCallable("ECctmc", "ECctmc_sample_path_unif2", (DL_FUNC)ECctmc_sample_path_unif2_try);
    R_RegisterCCallable("ECctmc", "ECctmc_RcppExport_validate", (DL_FUNC)ECctmc_RcppExport_validate);
    return R_NilValue;
}
