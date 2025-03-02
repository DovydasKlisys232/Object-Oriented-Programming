/*
Student: Dovydas Klisys
ID: B00165094
Date: 19 feb 2025
Purpose: This program includes a skeleton version of the two functions needed for conversion. This is the first version
of the program running. None of the outputs are correct, it is just used to develop the functions needed.*/

#include<iostream>
#include<iomanip>

using namespace std;

float from_euro(float amount, string currency); // from_euro function decleration
float to_euro(float amount, string currency); //to_euro function decleration

int main()
{
    cout<<fixed<<setprecision(2);
    cout<<from_euro(3.22, "USD")<<"\n";
    cout<<to_euro(2.35, "CNY")<<"\n";
    cout<<from_euro(2,"USD")<<"\n";
    return 0;
}

//this function will convert an amount of euro to a certain currency
float from_euro(float amount, string currency)
{
    return 1.0;
}

//converts an amount in a certain currency to euro
float to_euro(float amount, string currency)
{
    return 1.0;
}