/*
Student: Dovydas Klisys
ID: B00165094
Date: 11th feb 2025
Purpose: This program will convert a celsius input into kelvin. It utilizes a function to perform the conversion. There will
be no negative values for kelvin.*/

#include<iostream>

using namespace std;

//conversion function declared
float convkc( float temperature, char unit );

//variables are first declared
//program keeps running until user entered an incorrect temperature value or unit (not c or k)
//will output the reult of the conversion
int main()
{
    float val;
    char unit;
    while(cin>>val>>unit)
    {
        float result = convkc(val, unit);
        if(result != -1)
        {
            cout<<result<<"\n";
        }
        else
        {
            cout <<"Invalid input.\n";
        }
    }
}

//function that will convert the temperature entered to either kelvin or celsius
float convkc( float temperature, char unit )
{
    if(unit == 'k' || unit == 'K')
    {
        if(temperature >= 0)
        {
            return temperature - 273.15;
        }
        else
        {
            cerr<<"Can't have a negative kelvin.\n";
            throw 1;
        }
    }
    else if(unit == 'c' || unit == 'C')
    {
        if(temperature >= -273.15)
        {
        return temperature + 273.15;
        }
        else
        {
            cerr<<"Can't have a negative kelvin.\n";
            throw 1;
        }
    }
    else{
        return 0;
    }
}