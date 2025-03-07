/*
Student: Dovydas Klisys
ID: B00165094
Date: 4 mar 2025
Purpose: this program produces a class called rectangle. It contains private variables length and width. It contains member functions that will calculate
the rectangle's area and perimeter depending on its length and width.*/

#include<iostream>

using namespace std;

class rectangle
{   
    //private variables
    private:
        int length;
        int width;
    public:
        //Constructor to set length and width
        rectangle(int l, int w) : length(l), width(w) {}
        //function for calculating area
        int area()
        {
            return length*width;
        }
        //function for finding perimeter
        int perimeter()
        {
            return (2*length)+(2*width);
        }
};

//here the length and width is set by object r
//the public functions use these values to produce an area and perimeter
int main()
{
    rectangle r(12,4);
    cout<<r.area()<<"\n"; 
    cout<<r.perimeter();
    return 0;
}