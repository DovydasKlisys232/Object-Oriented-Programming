/*
Student: Dovydas Klisys
ID: B00165094
Date: 18 Mar 2025
Purpose: this is a simple program that creates a function that returns the stream state as a string.
It depends on which state was set to print out the set state.
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

string state_to_str(istream &ist); //function that will convert the stream state to a string

int main()
{
    int total = 0;
    int i = 0;
    cout << "Before: " << state_to_str(cin) << "\n";
    while (cin >> i) {
        total += i ; // do something
    }
    cout << "After: " << state_to_str(cin) << "\n";
    return 0;
}

string state_to_str(istream &ist)
{
    string s = "Stream state: ";
    if(ist.eof())
        s = s + "eof";
    if(ist.fail())
        s = s + "fail";
    if(ist.bad())
        s = s + "bad";
    return s;
}