\name{kurtosis}
\alias{kurtosis}
%- Also NEED an '\alias' for EACH other topic documented here.
\title{
	The Kurtosis of a Vector of Random Variables
}
\description{
	The function computes the centred and reduced moment of order 4 of the vector \code{x}.
}
\usage{
kurtosis(x)
}
%- maybe also 'usage' for other objects documented here.
\arguments{
  \item{x}{
	numeric, vector of independent and identical random variables
}
}
\details{
The function returns the value of
	
	\deqn{\frac{1}{n}\sum_{k=1}^{n}[(x_{i} - \mu_{x})/\sigma_{x}]^4}{(1/n)sum_{k=1}^n[(x_i-mu_x)/sigma_x]^4}
		

}
\value{
A vector of i.i.d. normal random variable.
}
\references{
https://en.wikipedia.org/wiki/Kurtosis
}
\author{
Nicolas Baradel - PGM Solutions
}
\note{
For the skewness, see the \code{skewness} function.
}

%% ~Make other sections like Warning with \section{Warning }{....} ~

\seealso{
\href{http://pgm-solutions.com/packages}{http://pgm-solutions.com/packages}
}
\examples{
kurtosis(rpgm.rnorm(10^5))
}
% Add one or more standard keywords, see file 'KEYWORDS' in the
% R documentation directory.
\keyword{ ~kwd1 }
\keyword{ ~kwd2 }% __ONLY ONE__ keyword per line
