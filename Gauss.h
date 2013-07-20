#ifndef __NORMAL__
#define __NORMAL__

#include <boost/random/normal_distribution.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/variate_generator.hpp>

typedef unsigned int uint;
typedef boost::mt19937 mt19937;
typedef boost::normal_distribution<double> DIST;


class Gauss{
public:
  Gauss(uint _seed = 2013);
	double operator()();
	double max();

private:
	uint seed;
	mt19937 rng;
	DIST dist_normal;
	boost::variate_generator<mt19937&, DIST> generator;
};


#endif
