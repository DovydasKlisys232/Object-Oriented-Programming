/*
Student: Dovydas Klisys
ID: B00165094
Date: 26 feb 2025
Purpose: this program will define the global variable and two functions that are declared in the tinylib.h header file
*/

#include <iostream> //needed for standard library functions
#include "tiny_lib/tinylib.h" //header file content included

using namespace std;

//global variable
int foo = 2;

void print(int i)
{
    cout<<"the integer value is: "<<i<<"\n";
}

void print_foo()
{
    print(foo);
}