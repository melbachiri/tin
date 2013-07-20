#include "Gauss.h"

Gauss::Gauss(uint _seed) : seed(_seed), rng(mt19937(_seed)), dist_normal(DIST(0.0, 1.0)), generator(boost::variate_generator<mt19937&, DIST>(rng, dist_normal)){ 
}

double Gauss::operator()(){
  return generator();
}
