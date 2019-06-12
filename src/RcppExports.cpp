// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// BVCStr
Rcpp::List BVCStr(arma::mat xx, arma::vec y, arma::mat W, arma::mat Ex, unsigned int s, unsigned int q, int maxSteps, arma::vec hatM, arma::vec hatR0, arma::vec hatRStar, arma::vec hatAlpha, arma::vec hatZeta, arma::vec hatInvSigM0, arma::vec hatInvTauSq0, arma::vec hatInvTauSqStar, arma::mat invSigAlpha0, arma::vec hatInvTauSqZeta, double hatLambdaSq0, double hatLambdaSqStar, double hatLambdaSqZeta, double hatSigmaSq, double a0, double b0, double aStar, double bStar, double alpha, double gamma, int progress);
RcppExport SEXP _spinBayes_BVCStr(SEXP xxSEXP, SEXP ySEXP, SEXP WSEXP, SEXP ExSEXP, SEXP sSEXP, SEXP qSEXP, SEXP maxStepsSEXP, SEXP hatMSEXP, SEXP hatR0SEXP, SEXP hatRStarSEXP, SEXP hatAlphaSEXP, SEXP hatZetaSEXP, SEXP hatInvSigM0SEXP, SEXP hatInvTauSq0SEXP, SEXP hatInvTauSqStarSEXP, SEXP invSigAlpha0SEXP, SEXP hatInvTauSqZetaSEXP, SEXP hatLambdaSq0SEXP, SEXP hatLambdaSqStarSEXP, SEXP hatLambdaSqZetaSEXP, SEXP hatSigmaSqSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP aStarSEXP, SEXP bStarSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Ex(ExSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type maxSteps(maxStepsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatM(hatMSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatR0(hatR0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatRStar(hatRStarSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatAlpha(hatAlphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatZeta(hatZetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvSigM0(hatInvSigM0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSq0(hatInvTauSq0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqStar(hatInvTauSqStarSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type invSigAlpha0(invSigAlpha0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqZeta(hatInvTauSqZetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSq0(hatLambdaSq0SEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqStar(hatLambdaSqStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqZeta(hatLambdaSqZetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatSigmaSq(hatSigmaSqSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double >::type aStar(aStarSEXP);
    Rcpp::traits::input_parameter< double >::type bStar(bStarSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(BVCStr(xx, y, W, Ex, s, q, maxSteps, hatM, hatR0, hatRStar, hatAlpha, hatZeta, hatInvSigM0, hatInvTauSq0, hatInvTauSqStar, invSigAlpha0, hatInvTauSqZeta, hatLambdaSq0, hatLambdaSqStar, hatLambdaSqZeta, hatSigmaSq, a0, b0, aStar, bStar, alpha, gamma, progress));
    return rcpp_result_gen;
END_RCPP
}
// BVCStr_NoE
Rcpp::List BVCStr_NoE(arma::mat xx, arma::vec y, arma::mat W, bool CLIN, unsigned int s, unsigned int q, int maxSteps, arma::vec hatM, arma::vec hatR0, arma::vec hatRStar, arma::vec hatAlpha, arma::vec hatInvSigM0, arma::vec hatInvTauSq0, arma::vec hatInvTauSqStar, arma::mat invSigAlpha0, double hatLambdaSq0, double hatLambdaSqStar, double hatSigmaSq, double a0, double b0, double aStar, double bStar, double alpha, double gamma, int progress);
RcppExport SEXP _spinBayes_BVCStr_NoE(SEXP xxSEXP, SEXP ySEXP, SEXP WSEXP, SEXP CLINSEXP, SEXP sSEXP, SEXP qSEXP, SEXP maxStepsSEXP, SEXP hatMSEXP, SEXP hatR0SEXP, SEXP hatRStarSEXP, SEXP hatAlphaSEXP, SEXP hatInvSigM0SEXP, SEXP hatInvTauSq0SEXP, SEXP hatInvTauSqStarSEXP, SEXP invSigAlpha0SEXP, SEXP hatLambdaSq0SEXP, SEXP hatLambdaSqStarSEXP, SEXP hatSigmaSqSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP aStarSEXP, SEXP bStarSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< bool >::type CLIN(CLINSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type maxSteps(maxStepsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatM(hatMSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatR0(hatR0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatRStar(hatRStarSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatAlpha(hatAlphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvSigM0(hatInvSigM0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSq0(hatInvTauSq0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqStar(hatInvTauSqStarSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type invSigAlpha0(invSigAlpha0SEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSq0(hatLambdaSq0SEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqStar(hatLambdaSqStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatSigmaSq(hatSigmaSqSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double >::type aStar(aStarSEXP);
    Rcpp::traits::input_parameter< double >::type bStar(bStarSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(BVCStr_NoE(xx, y, W, CLIN, s, q, maxSteps, hatM, hatR0, hatRStar, hatAlpha, hatInvSigM0, hatInvTauSq0, hatInvTauSqStar, invSigAlpha0, hatLambdaSq0, hatLambdaSqStar, hatSigmaSq, a0, b0, aStar, bStar, alpha, gamma, progress));
    return rcpp_result_gen;
END_RCPP
}
// BVCPointMass
Rcpp::List BVCPointMass(arma::mat xx, arma::vec y, arma::mat W, arma::mat Ex, unsigned int s, unsigned int q, int maxSteps, arma::vec hatM, arma::vec hatR0, arma::vec hatRStar, arma::vec hatAlpha, arma::vec hatZeta, arma::vec hatInvSigM0, arma::vec hatInvTauSq0, arma::vec hatInvTauSqStar, arma::mat invSigAlpha0, arma::vec hatInvTauSqZeta, double hatPi0, double hatPiStar, double hatPiZeta, double hatLambdaSq0, double hatLambdaSqStar, double hatLambdaSqZeta, double hatSigmaSq, double a0, double b0, double aStar, double bStar, double alpha, double gamma, double mu0, double muStar, double muE, double nu0, double nuStar, double nuE, int progress);
RcppExport SEXP _spinBayes_BVCPointMass(SEXP xxSEXP, SEXP ySEXP, SEXP WSEXP, SEXP ExSEXP, SEXP sSEXP, SEXP qSEXP, SEXP maxStepsSEXP, SEXP hatMSEXP, SEXP hatR0SEXP, SEXP hatRStarSEXP, SEXP hatAlphaSEXP, SEXP hatZetaSEXP, SEXP hatInvSigM0SEXP, SEXP hatInvTauSq0SEXP, SEXP hatInvTauSqStarSEXP, SEXP invSigAlpha0SEXP, SEXP hatInvTauSqZetaSEXP, SEXP hatPi0SEXP, SEXP hatPiStarSEXP, SEXP hatPiZetaSEXP, SEXP hatLambdaSq0SEXP, SEXP hatLambdaSqStarSEXP, SEXP hatLambdaSqZetaSEXP, SEXP hatSigmaSqSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP aStarSEXP, SEXP bStarSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP mu0SEXP, SEXP muStarSEXP, SEXP muESEXP, SEXP nu0SEXP, SEXP nuStarSEXP, SEXP nuESEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Ex(ExSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type maxSteps(maxStepsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatM(hatMSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatR0(hatR0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatRStar(hatRStarSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatAlpha(hatAlphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatZeta(hatZetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvSigM0(hatInvSigM0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSq0(hatInvTauSq0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqStar(hatInvTauSqStarSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type invSigAlpha0(invSigAlpha0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqZeta(hatInvTauSqZetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatPi0(hatPi0SEXP);
    Rcpp::traits::input_parameter< double >::type hatPiStar(hatPiStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatPiZeta(hatPiZetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSq0(hatLambdaSq0SEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqStar(hatLambdaSqStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqZeta(hatLambdaSqZetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatSigmaSq(hatSigmaSqSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double >::type aStar(aStarSEXP);
    Rcpp::traits::input_parameter< double >::type bStar(bStarSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< double >::type muStar(muStarSEXP);
    Rcpp::traits::input_parameter< double >::type muE(muESEXP);
    Rcpp::traits::input_parameter< double >::type nu0(nu0SEXP);
    Rcpp::traits::input_parameter< double >::type nuStar(nuStarSEXP);
    Rcpp::traits::input_parameter< double >::type nuE(nuESEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(BVCPointMass(xx, y, W, Ex, s, q, maxSteps, hatM, hatR0, hatRStar, hatAlpha, hatZeta, hatInvSigM0, hatInvTauSq0, hatInvTauSqStar, invSigAlpha0, hatInvTauSqZeta, hatPi0, hatPiStar, hatPiZeta, hatLambdaSq0, hatLambdaSqStar, hatLambdaSqZeta, hatSigmaSq, a0, b0, aStar, bStar, alpha, gamma, mu0, muStar, muE, nu0, nuStar, nuE, progress));
    return rcpp_result_gen;
END_RCPP
}
// BVCPointMass_NoE
Rcpp::List BVCPointMass_NoE(arma::mat xx, arma::vec y, arma::mat W, bool CLIN, unsigned int s, unsigned int q, int maxSteps, arma::vec hatM, arma::vec hatR0, arma::vec hatRStar, arma::vec hatAlpha, arma::vec hatInvSigM0, arma::vec hatInvTauSq0, arma::vec hatInvTauSqStar, arma::mat invSigAlpha0, double hatPi0, double hatPiStar, double hatLambdaSq0, double hatLambdaSqStar, double hatSigmaSq, double a0, double b0, double aStar, double bStar, double alpha, double gamma, double mu0, double muStar, double nu0, double nuStar, int progress);
RcppExport SEXP _spinBayes_BVCPointMass_NoE(SEXP xxSEXP, SEXP ySEXP, SEXP WSEXP, SEXP CLINSEXP, SEXP sSEXP, SEXP qSEXP, SEXP maxStepsSEXP, SEXP hatMSEXP, SEXP hatR0SEXP, SEXP hatRStarSEXP, SEXP hatAlphaSEXP, SEXP hatInvSigM0SEXP, SEXP hatInvTauSq0SEXP, SEXP hatInvTauSqStarSEXP, SEXP invSigAlpha0SEXP, SEXP hatPi0SEXP, SEXP hatPiStarSEXP, SEXP hatLambdaSq0SEXP, SEXP hatLambdaSqStarSEXP, SEXP hatSigmaSqSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP aStarSEXP, SEXP bStarSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP mu0SEXP, SEXP muStarSEXP, SEXP nu0SEXP, SEXP nuStarSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< bool >::type CLIN(CLINSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type maxSteps(maxStepsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatM(hatMSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatR0(hatR0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatRStar(hatRStarSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatAlpha(hatAlphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvSigM0(hatInvSigM0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSq0(hatInvTauSq0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqStar(hatInvTauSqStarSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type invSigAlpha0(invSigAlpha0SEXP);
    Rcpp::traits::input_parameter< double >::type hatPi0(hatPi0SEXP);
    Rcpp::traits::input_parameter< double >::type hatPiStar(hatPiStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSq0(hatLambdaSq0SEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqStar(hatLambdaSqStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatSigmaSq(hatSigmaSqSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double >::type aStar(aStarSEXP);
    Rcpp::traits::input_parameter< double >::type bStar(bStarSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< double >::type muStar(muStarSEXP);
    Rcpp::traits::input_parameter< double >::type nu0(nu0SEXP);
    Rcpp::traits::input_parameter< double >::type nuStar(nuStarSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(BVCPointMass_NoE(xx, y, W, CLIN, s, q, maxSteps, hatM, hatR0, hatRStar, hatAlpha, hatInvSigM0, hatInvTauSq0, hatInvTauSqStar, invSigAlpha0, hatPi0, hatPiStar, hatLambdaSq0, hatLambdaSqStar, hatSigmaSq, a0, b0, aStar, bStar, alpha, gamma, mu0, muStar, nu0, nuStar, progress));
    return rcpp_result_gen;
END_RCPP
}
// BVCPointMassNonStr
Rcpp::List BVCPointMassNonStr(arma::mat xx, arma::vec y, arma::mat W, arma::mat Ex, unsigned int s, unsigned int q, int maxSteps, arma::vec hatM, arma::vec hatRStar, arma::vec hatAlpha, arma::vec hatZeta, arma::vec hatInvSigM0, arma::vec hatInvTauSqStar, arma::mat invSigAlpha0, arma::vec hatInvTauSqZeta, double hatPiStar, double hatPiZeta, double hatLambdaSqStar, double hatLambdaSqZeta, double hatSigmaSq, double a0, double b0, double aStar, double bStar, double alpha, double gamma, double mu0, double muStar, double nu0, double nuStar, int progress);
RcppExport SEXP _spinBayes_BVCPointMassNonStr(SEXP xxSEXP, SEXP ySEXP, SEXP WSEXP, SEXP ExSEXP, SEXP sSEXP, SEXP qSEXP, SEXP maxStepsSEXP, SEXP hatMSEXP, SEXP hatRStarSEXP, SEXP hatAlphaSEXP, SEXP hatZetaSEXP, SEXP hatInvSigM0SEXP, SEXP hatInvTauSqStarSEXP, SEXP invSigAlpha0SEXP, SEXP hatInvTauSqZetaSEXP, SEXP hatPiStarSEXP, SEXP hatPiZetaSEXP, SEXP hatLambdaSqStarSEXP, SEXP hatLambdaSqZetaSEXP, SEXP hatSigmaSqSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP aStarSEXP, SEXP bStarSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP mu0SEXP, SEXP muStarSEXP, SEXP nu0SEXP, SEXP nuStarSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Ex(ExSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type maxSteps(maxStepsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatM(hatMSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatRStar(hatRStarSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatAlpha(hatAlphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatZeta(hatZetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvSigM0(hatInvSigM0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqStar(hatInvTauSqStarSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type invSigAlpha0(invSigAlpha0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqZeta(hatInvTauSqZetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatPiStar(hatPiStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatPiZeta(hatPiZetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqStar(hatLambdaSqStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqZeta(hatLambdaSqZetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatSigmaSq(hatSigmaSqSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double >::type aStar(aStarSEXP);
    Rcpp::traits::input_parameter< double >::type bStar(bStarSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< double >::type muStar(muStarSEXP);
    Rcpp::traits::input_parameter< double >::type nu0(nu0SEXP);
    Rcpp::traits::input_parameter< double >::type nuStar(nuStarSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(BVCPointMassNonStr(xx, y, W, Ex, s, q, maxSteps, hatM, hatRStar, hatAlpha, hatZeta, hatInvSigM0, hatInvTauSqStar, invSigAlpha0, hatInvTauSqZeta, hatPiStar, hatPiZeta, hatLambdaSqStar, hatLambdaSqZeta, hatSigmaSq, a0, b0, aStar, bStar, alpha, gamma, mu0, muStar, nu0, nuStar, progress));
    return rcpp_result_gen;
END_RCPP
}
// BVCPointMassNonStr_NoE
Rcpp::List BVCPointMassNonStr_NoE(arma::mat xx, arma::vec y, arma::mat W, bool CLIN, unsigned int s, unsigned int q, int maxSteps, arma::vec hatM, arma::vec hatRStar, arma::vec hatAlpha, arma::vec hatInvSigM0, arma::vec hatInvTauSqStar, arma::mat invSigAlpha0, double hatPiStar, double hatLambdaSqStar, double hatSigmaSq, double aStar, double bStar, double alpha, double gamma, double muStar, double nuStar, int progress);
RcppExport SEXP _spinBayes_BVCPointMassNonStr_NoE(SEXP xxSEXP, SEXP ySEXP, SEXP WSEXP, SEXP CLINSEXP, SEXP sSEXP, SEXP qSEXP, SEXP maxStepsSEXP, SEXP hatMSEXP, SEXP hatRStarSEXP, SEXP hatAlphaSEXP, SEXP hatInvSigM0SEXP, SEXP hatInvTauSqStarSEXP, SEXP invSigAlpha0SEXP, SEXP hatPiStarSEXP, SEXP hatLambdaSqStarSEXP, SEXP hatSigmaSqSEXP, SEXP aStarSEXP, SEXP bStarSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP muStarSEXP, SEXP nuStarSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< bool >::type CLIN(CLINSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type maxSteps(maxStepsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatM(hatMSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatRStar(hatRStarSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatAlpha(hatAlphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvSigM0(hatInvSigM0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqStar(hatInvTauSqStarSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type invSigAlpha0(invSigAlpha0SEXP);
    Rcpp::traits::input_parameter< double >::type hatPiStar(hatPiStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqStar(hatLambdaSqStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatSigmaSq(hatSigmaSqSEXP);
    Rcpp::traits::input_parameter< double >::type aStar(aStarSEXP);
    Rcpp::traits::input_parameter< double >::type bStar(bStarSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type muStar(muStarSEXP);
    Rcpp::traits::input_parameter< double >::type nuStar(nuStarSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(BVCPointMassNonStr_NoE(xx, y, W, CLIN, s, q, maxSteps, hatM, hatRStar, hatAlpha, hatInvSigM0, hatInvTauSqStar, invSigAlpha0, hatPiStar, hatLambdaSqStar, hatSigmaSq, aStar, bStar, alpha, gamma, muStar, nuStar, progress));
    return rcpp_result_gen;
END_RCPP
}
// BVCNoStr
Rcpp::List BVCNoStr(arma::mat xx, arma::vec y, arma::mat W, arma::mat Ex, unsigned int s, unsigned int q, int maxSteps, arma::vec hatM, arma::vec hatRStar, arma::vec hatAlpha, arma::vec hatZeta, arma::vec hatInvSigM0, arma::vec hatInvTauSqStar, arma::mat invSigAlpha0, arma::vec hatInvTauSqZeta, double hatLambdaSqStar, double hatLambdaSqZeta, double hatSigmaSq, double a0, double b0, double aStar, double bStar, double alpha, double gamma, int progress);
RcppExport SEXP _spinBayes_BVCNoStr(SEXP xxSEXP, SEXP ySEXP, SEXP WSEXP, SEXP ExSEXP, SEXP sSEXP, SEXP qSEXP, SEXP maxStepsSEXP, SEXP hatMSEXP, SEXP hatRStarSEXP, SEXP hatAlphaSEXP, SEXP hatZetaSEXP, SEXP hatInvSigM0SEXP, SEXP hatInvTauSqStarSEXP, SEXP invSigAlpha0SEXP, SEXP hatInvTauSqZetaSEXP, SEXP hatLambdaSqStarSEXP, SEXP hatLambdaSqZetaSEXP, SEXP hatSigmaSqSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP aStarSEXP, SEXP bStarSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Ex(ExSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type maxSteps(maxStepsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatM(hatMSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatRStar(hatRStarSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatAlpha(hatAlphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatZeta(hatZetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvSigM0(hatInvSigM0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqStar(hatInvTauSqStarSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type invSigAlpha0(invSigAlpha0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqZeta(hatInvTauSqZetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqStar(hatLambdaSqStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqZeta(hatLambdaSqZetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatSigmaSq(hatSigmaSqSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double >::type aStar(aStarSEXP);
    Rcpp::traits::input_parameter< double >::type bStar(bStarSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(BVCNoStr(xx, y, W, Ex, s, q, maxSteps, hatM, hatRStar, hatAlpha, hatZeta, hatInvSigM0, hatInvTauSqStar, invSigAlpha0, hatInvTauSqZeta, hatLambdaSqStar, hatLambdaSqZeta, hatSigmaSq, a0, b0, aStar, bStar, alpha, gamma, progress));
    return rcpp_result_gen;
END_RCPP
}
// BVCNoStr_NoE
Rcpp::List BVCNoStr_NoE(arma::mat xx, arma::vec y, arma::mat W, bool CLIN, unsigned int s, unsigned int q, int maxSteps, arma::vec hatM, arma::vec hatRStar, arma::vec hatAlpha, arma::vec hatInvSigM0, arma::vec hatInvTauSqStar, arma::mat invSigAlpha0, double hatLambdaSqStar, double hatSigmaSq, double aStar, double bStar, double alpha, double gamma, int progress);
RcppExport SEXP _spinBayes_BVCNoStr_NoE(SEXP xxSEXP, SEXP ySEXP, SEXP WSEXP, SEXP CLINSEXP, SEXP sSEXP, SEXP qSEXP, SEXP maxStepsSEXP, SEXP hatMSEXP, SEXP hatRStarSEXP, SEXP hatAlphaSEXP, SEXP hatInvSigM0SEXP, SEXP hatInvTauSqStarSEXP, SEXP invSigAlpha0SEXP, SEXP hatLambdaSqStarSEXP, SEXP hatSigmaSqSEXP, SEXP aStarSEXP, SEXP bStarSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< bool >::type CLIN(CLINSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type maxSteps(maxStepsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatM(hatMSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatRStar(hatRStarSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatAlpha(hatAlphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvSigM0(hatInvSigM0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqStar(hatInvTauSqStarSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type invSigAlpha0(invSigAlpha0SEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqStar(hatLambdaSqStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatSigmaSq(hatSigmaSqSEXP);
    Rcpp::traits::input_parameter< double >::type aStar(aStarSEXP);
    Rcpp::traits::input_parameter< double >::type bStar(bStarSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(BVCNoStr_NoE(xx, y, W, CLIN, s, q, maxSteps, hatM, hatRStar, hatAlpha, hatInvSigM0, hatInvTauSqStar, invSigAlpha0, hatLambdaSqStar, hatSigmaSq, aStar, bStar, alpha, gamma, progress));
    return rcpp_result_gen;
END_RCPP
}
// BayesLasso
Rcpp::List BayesLasso(arma::mat xx, arma::vec y, arma::mat W, arma::mat Ex, unsigned int s, int maxSteps, double hatM, arma::vec hatRStar, arma::vec hatAlpha, arma::vec hatZeta, double invSigM0, arma::vec hatInvTauSqStar, arma::mat invSigAlpha0, arma::vec hatInvTauSqZeta, double hatLambdaSqStar, double hatLambdaSqZeta, double hatSigmaSq, double a0, double b0, double aStar, double bStar, double alpha, double gamma, int progress);
RcppExport SEXP _spinBayes_BayesLasso(SEXP xxSEXP, SEXP ySEXP, SEXP WSEXP, SEXP ExSEXP, SEXP sSEXP, SEXP maxStepsSEXP, SEXP hatMSEXP, SEXP hatRStarSEXP, SEXP hatAlphaSEXP, SEXP hatZetaSEXP, SEXP invSigM0SEXP, SEXP hatInvTauSqStarSEXP, SEXP invSigAlpha0SEXP, SEXP hatInvTauSqZetaSEXP, SEXP hatLambdaSqStarSEXP, SEXP hatLambdaSqZetaSEXP, SEXP hatSigmaSqSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP aStarSEXP, SEXP bStarSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Ex(ExSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    Rcpp::traits::input_parameter< int >::type maxSteps(maxStepsSEXP);
    Rcpp::traits::input_parameter< double >::type hatM(hatMSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatRStar(hatRStarSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatAlpha(hatAlphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatZeta(hatZetaSEXP);
    Rcpp::traits::input_parameter< double >::type invSigM0(invSigM0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqStar(hatInvTauSqStarSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type invSigAlpha0(invSigAlpha0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqZeta(hatInvTauSqZetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqStar(hatLambdaSqStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqZeta(hatLambdaSqZetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatSigmaSq(hatSigmaSqSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double >::type aStar(aStarSEXP);
    Rcpp::traits::input_parameter< double >::type bStar(bStarSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(BayesLasso(xx, y, W, Ex, s, maxSteps, hatM, hatRStar, hatAlpha, hatZeta, invSigM0, hatInvTauSqStar, invSigAlpha0, hatInvTauSqZeta, hatLambdaSqStar, hatLambdaSqZeta, hatSigmaSq, a0, b0, aStar, bStar, alpha, gamma, progress));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP run_testthat_tests();

static const R_CallMethodDef CallEntries[] = {
    {"_spinBayes_BVCStr", (DL_FUNC) &_spinBayes_BVCStr, 28},
    {"_spinBayes_BVCStr_NoE", (DL_FUNC) &_spinBayes_BVCStr_NoE, 25},
    {"_spinBayes_BVCPointMass", (DL_FUNC) &_spinBayes_BVCPointMass, 37},
    {"_spinBayes_BVCPointMass_NoE", (DL_FUNC) &_spinBayes_BVCPointMass_NoE, 31},
    {"_spinBayes_BVCPointMassNonStr", (DL_FUNC) &_spinBayes_BVCPointMassNonStr, 31},
    {"_spinBayes_BVCPointMassNonStr_NoE", (DL_FUNC) &_spinBayes_BVCPointMassNonStr_NoE, 23},
    {"_spinBayes_BVCNoStr", (DL_FUNC) &_spinBayes_BVCNoStr, 25},
    {"_spinBayes_BVCNoStr_NoE", (DL_FUNC) &_spinBayes_BVCNoStr_NoE, 20},
    {"_spinBayes_BayesLasso", (DL_FUNC) &_spinBayes_BayesLasso, 24},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_spinBayes(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
