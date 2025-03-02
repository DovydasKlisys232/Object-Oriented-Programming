

#include<iostream>
#include"eurolib.h"

using namespace std;

//bad_input class and two functions declared
float from_euro(float amount, string currency);
float to_euro(float amount, string currency);

//global variables
#define usd_per_euro 1.04
#define stg_per_euro 0.83
#define jpy_per_euro 158.05
#define cny_per_euro 7.59 


//function for converting the euro input into a certain currency
float from_euro(float amount, string currency)
{
    if(amount < 0)
    {
        throw bad_inputs();
    }
    if(currency == "usd" || currency == "USD")
    {
        return amount * usd_per_euro;
    }
    else if(currency == "stg" || currency == "STG")
    {
        return amount * stg_per_euro;
    }
    else if(currency == "jpy" || currency == "JPY")
    {
        return amount * jpy_per_euro;
    }
    else if(currency == "cny" || currency == "CNY")
    {
        return amount * cny_per_euro;
    }
    else{
        throw bad_inputs();
    }
}

//function for converting an input of a certain currency into euro
float to_euro(float amount, string currency)
{
    if(amount < 0)
    {
        throw bad_inputs();
    }
    if(currency == "usd" || currency == "USD")
    {
        return amount / usd_per_euro;
    }
    else if(currency == "stg" || currency == "STG")
    {
        return amount / stg_per_euro;
    }
    else if(currency == "jpy" || currency == "JPY")
    {
        return amount / jpy_per_euro;
    }
    else if(currency == "cny" || currency == "CNY")
    {
        return amount / cny_per_euro;
    }
    else{
        throw bad_inputs();
    }
}

/*resource: https://www.w3schools.com/cpp/default.asp*/