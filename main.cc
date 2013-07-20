#define foreach BOOST_FOREACH

#include <iostream>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <boost/accumulators/statistics/mean.hpp> 
#include <boost/accumulators/statistics/variance.hpp>

#include <vector>
#include <boost/foreach.hpp>

#include "Gauss.h"

using namespace boost::accumulators;
using namespace std;

int main(void) {

  Gauss G;

  std::vector<double> v(10);
  
  foreach(double &x, v){ x=G(); }
  foreach(double x, v){ std::cout<<x<<std::endl; }


/*
	accumulator_set<double, features<tag::mean, tag::variance> > acc;
 
 	uint NbSim = 1000000;

 	for(uint i= 0; i<NbSim; i++){
 		acc(G());
 	}

 	cout << "Mean : " << mean(acc) << endl;
 	cout << "Variance : " << variance(acc) << endl;

*/

	return 0;
}
