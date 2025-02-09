/*
Student: Dovydas Klisys
ID: B00165094
Date: 8th feb 2025
Purpose: This program is a modified version of ctod_v1.cpp but it incorporates a function for converting
the value entered (celsius to fahrenheit or fahrenheit to celsius) depending on the unit entered*/

#include<iostream>

using namespace std;

//conversion function declared
float convfc( float temperature, char unit );

//variables are first declared
//program keeps running until user entered an incorrect temperature value or unit (not c or f)
//will output the reult of the conversion
int main()
{
    float val;
    char unit;
    while(cin>>val>>unit)
    {
        cout<<convfc(val, unit)<<"\n";
    }
}

//function that will convert the temperature entered to either fahrenheit or celsius
float convfc( float temperature, char unit )
{
    if(unit == 'c' || unit == 'C')
    {
        return (temperature * 1.8) + 32;
    }
    else if(unit == 'f' || unit == 'F')
    {
        return (temperature - 32) / 1.8;
    }
    else{
        return 0;
    }
}