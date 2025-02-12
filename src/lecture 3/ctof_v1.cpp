/*
Student: Dovydas Klisys
ID: B00165094
Date: 8th feb 2025
Purpose: This program will read in a temperature from standard input and will convert it to celcius or fahrenheit
depending on what the user inputed initially.*/

#include<iostream>

using namespace std;

//first all variables are defined
//user can enter a value and unit (either c for celsius or f for fahrenheit)
//depending on the unit, the program will convert the value into the other unit
//if neither a correct value (float) or unit (c or f) is entered, then the program will end

int main()
{
    float val;
    char unit;
    while(cin>>val>>unit)
    {
        if(unit == 'c' || unit =='C')
        {
            cout<<"celsius to fahrenheit: "<<(val * 1.8) + 32<<"\n";
        }
        else if(unit == 'f' || unit == 'F')
        {
            cout<<"fahrenheit to celsius: "<<(val - 32) / 1.8<<"\n";
        }
        else
        {
            return 0;
        }
    }
}