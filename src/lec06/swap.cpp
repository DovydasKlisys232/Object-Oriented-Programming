/*
Student: Dovydas Klisys
ID: B00165094
Date: 26 feb 2025
Purpose: this program declares and defines a swap function to be tested with gdb.*/

#include<iostream>

using namespace std;

void swap_i(int a, int b); //swap_i function decleration
void swap_r(int&, int&);

int main()
{
    int x = 7, y = 9 ;
    swap_r(x, y);
    //swap_r(7, 9);

    const int cx = 7, cy = 9 ;
    //swap_r(cx, cy) ; cant change a constant
    //swap_r(7.7, 9.3) ; wrong type need to be int

    double dx = 7.7, dy = 8.2 ;
    //swap_r( dx, dy ); wrong variable data types

    return 0; //end of code
}

//function that swaps an int variable with a different variables value
void swap_i(int a, int b) 
{
    int temp;
    temp = a ;
    a = b;
    b = temp;
}

void swap_r(int&a, int&b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap_cr( const int&a, const int&b)
{
    int temp = a;
    //a = b;
   //b = temp;
}