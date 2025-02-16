/*
Student: Dovydas Klisys
ID: B00165094
Date: 16 feb 2025
Purpose: This program finds the area if it is given the correct parameters. It looks for a width and length as an int.
If the user gives incorrect parameters, then the code will produce an error message. Else it will continue.*/

#include<iostream>

using namespace std;

class bad_area{ }; //a class used as an exception
int area(int length, int width); //area function decleration

int main()
{
    int length;
    int width;
    cout<<"Enter a length and width.\n";
    try
    {
        cin>>length>>width;
        area(length,width);
    }
    catch(bad_area)
    {
        cerr<<"Not correct parameters entered.\n";
    }
    cout<<"The area is: "<<area(length, width);
    return 0;
}

//This function finds the area of something with a certain length and width
int area(int length, int width)
{
    if(length <= 0 || width <= 0)
    {
        throw bad_area();
    }
    return length*width;
}