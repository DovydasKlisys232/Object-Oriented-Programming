/*
Student: Dovydas Klisys
ID: B00165094
Date: 18 Mar 2025
Purpose: this is a simple program that will create a function that checks which error states have been set to throw an exception.
It returns a string depending on which stream state is set.
The states are not actually occuring just set on purpose to demonstrate the different exceptions that can happen.
*/

#include <iostream>
#include <fstream>

using namespace std;

string exceptions_to_str( istream &ist ) ;

int main()
{
    cout << "Before: " << exceptions_to_str(cin) << "\n" ;
    cin.exceptions ( ifstream:: failbit | ifstream::badbit );
    cout << "After: " << exceptions_to_str(cin) << "\n" ;
    return 0;
}

string exceptions_to_str( istream &ist )
{
    string s = "Exception thrown if state is ";
    if ( (ist.exceptions() & ifstream::eofbit ) != 0 )
        s = s + "eof ";
    if ( (ist.exceptions() & ifstream::failbit ) != 0 )
        s = s + "fail ";
    if ( (ist.exceptions() & ifstream::badbit ) != 0 )
        s = s +"bad ";
    return s;
}