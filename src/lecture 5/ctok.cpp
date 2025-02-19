/*
Student: Dovydas Klisys
ID: B00165094
Date: 18 feb 2025
Purpose: This program is meant to convert a celsius value into kelvin. It is filled with certain errors that are
pointed out by comments and fixed.*/

//the program is missing #include<iostream>
#include<iostream>

//forgot to specify namespace to use cin and cout
using namespace std;

class bad_temp{ };
class bad_unit{ };

//function returns an integer data type. It should be returning an integer value or variable. also its missing ';'
double ctok(double t, char unit) // Converts Celsius to Kelvin or other way around
{
    if(tolower(unit) == 'c')
    {
        if(t < -273.15)
        {
            throw bad_temp();
        }
        int k = t + 273.15;
        return k;
    }
    else if(tolower(unit) == 'k')
    {
        if(t < 0)
        {
            throw bad_temp();
        }
        int c = t - 273.15;
        return c;
    }
    else
    {
        throw bad_unit();
    }
}

//cin taking in value for variable that is not declared.
//function call takes in a char variable when it should take in an integer.
//cout spelled with a capital C.
int main()
{
    double t = 0;
    char unit;
    try
    {
        cin >> t >> unit;
        double conversion = ctok(t,unit);
        cout << conversion << endl;
    }
    catch (bad_temp)
    {
        cerr<<"Temperature entered will produce an incorrect output!";
    }
    catch (bad_unit)
    {
        cerr<<"incorrect unit entered. Please enter c or f";
    }

    return 0;
}