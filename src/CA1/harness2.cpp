/*
Student: Dovydas Klisys
ID: B00165094
Date: 20/2/25
Purpose: This program tests two functions (to_euro() and from_euro()). The two functions are declared and defined. The functions are called in
different ways in the main function.*/

#include<iostream>
#include<iomanip>

using namespace std;

//bad_input class and two functions declared
class bad_inputs{ };
float from_euro(float amount, string currency);
float to_euro(float amount, string currency);

//global variables
#define usd_per_euro 1.04
#define stg_per_euro 0.83
#define jpy_per_euro 158.05
#define cny_per_euro 7.59 

//first the precision is set to two decimal points
//the functions are tested with different inputs
int main()
{
    cout<<fixed<<setprecision(2);
    cout<<from_euro(3.22,"usd")<<"\n";
    cout<<from_euro(2.77,"jpy")<<"\n";
    cout<<from_euro(34.00,"stg")<<"\n";
    cout<<from_euro(1.15,"cny")<<"\n";
    cout<<from_euro(12.35,"stg")<<"\n";
    cout<<from_euro(2.30,"stg")<<"\n";
    cout<<to_euro(3.50,"usd")<<"\n";
    cout<<to_euro(50.50,"jpy")<<"\n";
    cout<<to_euro(5.70,"stg")<<"\n";
    cout<<to_euro(10.25,"cny")<<"\n";
    cout<<to_euro(1.00,"cny")<<"\n";
    cout<<to_euro(335.00,"jpy")<<"\n";
    return 0;
}

//function for converting the euro input into a certain currency
float from_euro(float amount, string currency)
{
    if(amount < 0)
    {
        throw bad_inputs();
    }
    if(currency == "usd")
    {
        return amount * usd_per_euro;
    }
    else if(currency == "stg")
    {
        return amount * stg_per_euro;
    }
    else if(currency == "jpy")
    {
        return amount * jpy_per_euro;
    }
    else if(currency == "cny")
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
    if(currency == "usd")
    {
        return amount / usd_per_euro;
    }
    else if(currency == "stg")
    {
        return amount / stg_per_euro;
    }
    else if(currency == "jpy")
    {
        return amount / jpy_per_euro;
    }
    else if(currency == "cny")
    {
        return amount / cny_per_euro;
    }
    else{
        throw bad_inputs();
    }
}