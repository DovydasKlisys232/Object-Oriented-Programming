/*
Student: Dovydas Klisys
ID: B00165094
Date: 3 mar 2025
Purpose: this program is to get used to classes in c++. A class called circle will be defined before the main function. This class will 
contain private member variables for radius and some member functions to calculate circle's area and circumference. */

#include<iostream>

using namespace std;

//circle class definition
class circle{
private:
    double radius;
    const double pi = 3.14159; //pi defined as a constant double which will be used in member functions
public:
    // Constructor to set radius
    circle(double r) : radius(r) {}
    //function for calculating the area of the circle
    double area()
    {
        return pi*(radius*radius);
    }
    //function for calculating the circumference of the circle
    double circumference()
    {
        return 2*pi*radius;
    }
};

//first an object c is created of class circle
//it can access all public member function in circle class
//the area and circumference is printed out for a circle with radius 12.5
int main()
{
    circle c(23.4);
    cout<<c.area()<<"\n"; 
    cout<<c.circumference();
    return 0;
}