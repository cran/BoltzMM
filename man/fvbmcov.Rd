% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{fvbmcov}
\alias{fvbmcov}
\title{Sandwich estimator of the covariance matrix for a fitted fully-visible Boltzmann machine.}
\usage{
fvbmcov(data, model, fvbmHess)
}
\arguments{
\item{data}{An N by n matrix, where each of the N rows contains a length n string of spin variables  (i.e. each element is -1 or 1).}

\item{model}{List generated from \code{fitfvbm}.}

\item{fvbmHess}{A function that computes the Hessian of the parameter elements. Currently, the only implemented method is the default \code{fvbmHess} function.}
}
\value{
The n+choose(n,2) by n+choose(n,2) sandwich covariance matrix, estimated using \code{data} and evaluated at the fitted parameter values provided in \code{model}. Each row (column) is a unique element of the bias vector and interaction matrix. The rows are arranged in lexicographical order with the bias elements first, followed by the interaction elements. For example, if n=3, the order would be bias[1], bias[2] bias[3], interaction[1,2], interaction[1,3], and interaction[2,3].
}
\description{
Computes the sandwich estimator of the covariance matrix for a maximum pseudolikelihood estimated fully-visible Boltzmann machine.
}
\examples{
# Generate num=1000 random strings of n=3 binary spin variables under bvec and Mmat.
num <- 1000
bvec <- c(0,0.5,0.25)
Mmat <- matrix(0.1,3,3) - diag(0.1,3,3)
data <- rfvbm(num,bvec,Mmat)
# Fit a fully visible Boltzmann machine to data, starting from parameters bvec and Mmat.
model <- fitfvbm(data,bvec,Mmat)
# Compute the sandwich covariance matrix using the data and the model.
fvbmcov(data,model,fvbmHess)
}
\references{
H.D. Nguyen and I.A. Wood (2016), Asymptotic normality of the maximum pseudolikelihood estimator for fully-visible Boltzmann machines, IEEE Transactions on Neural Networks and Learning Systems, vol. 27, pp. 897-902.
}
\author{
Andrew T. Jones and Hien D. Nguyen
}
