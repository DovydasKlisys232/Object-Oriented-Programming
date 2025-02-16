/*
Student: Dovydas Klisys
ID: B00165094
Date: 16 feb 2025
Purpose: This program will test the area function from a previous lecture. It will include a small main function
to call the function in different ways and see what kind of errors it encounters.*/

#include<iostream>

using namespace std;

int area(int length, int width); //area function decleration

int main()
{
    int x1 = area(7,8);
    int x2 = area(3.2,8);
    int x3 = area('s', 8);
    cout<<x3;
    return 0;
}

//This function finds the area of something with a certain length and width
int area(int length, int width)
{
    return length*width;
}