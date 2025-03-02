#ifndef __EUROLIB_H__
#define __EUROLIB_H__

#include<string>
using namespace std;

class bad_inputs{ }; //bad inout class used for throwing exceptions
float from_euro(float amount, string currency); //converting euro to a new currency function
float to_euro(float amount, string currency); //convertting a currency to euro function
//definitions for amount of the currency per 1 euro
#define usd_per_euro 1.04 
#define stg_per_euro 0.83
#define jpy_per_euro 158.05
#define cny_per_euro 7.59 

#endif // __EUROLIB_H__