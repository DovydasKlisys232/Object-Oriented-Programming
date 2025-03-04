/*
Student: Dovydas Klisys
ID: B00165094
Date: 3 mar 2025
Purpose: this program is to get used to classes in c++. A class called circle will be defined before the main function. This class will 
contain private member variables for radius and some member functions to calculate circle's area and circumference. */

#include<iostream>

using namespace std;

class circle{
private:
    double radius;
    const double pi = 3.14159;
public:
    double area(double radius, const double pi)
    {
        return pi*(radius*radius);
    }
    double circumference(double radius, const double pi)
    {
        return 2*pi*radius;
    }
};


int main()
{

    return 0;
}