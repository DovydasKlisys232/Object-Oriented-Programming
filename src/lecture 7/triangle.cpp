/*
Student: Dovydas Klisys
ID: B00165094
Date: 3 mar 2025
Purpose: this program creates a class called triangle which will hold the lengths of the triangle as private members (variables). In the public section 
there will be a constructor which will take the lengths of the three sides. There will be a function to check if the sides make up a real triangle. Another 
function will check if the triangle is equilateral, isosceles, or scalene.
*/

#include<iostream>

using namespace std;

class triangle{
    private:
        double side_a;
        double side_b;
        double side_c;
    public:
        class invalid { };
        //constructor for choosing sides of triangle
        triangle(double a, double b, double c) : side_a(a), side_b(b), side_c(c) 
        {
            if (side_a + side_b < side_c || side_a + side_c < side_b || side_b + side_c < side_a)
            {
                throw invalid();
            }
        }
        //function to check if equilateral
        bool equilateral()
        {
            if(side_a == side_b && side_b == side_c)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        //function to check if scalene
        bool isosceles()
        {
            if(side_a == side_b || side_b == side_c || side_a == side_c)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        //funcions to check if obtuse
        bool scalene()
        {
            if(side_a != side_b && side_b != side_c && side_a != side_c)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    try
    {
        triangle t(32.0, 12.0, 62.0);
        if(t.equilateral())
        {
            cout<<"triangle is equilateral"<<"\n";
        }
        else if(t.isosceles())
        {
            cout<<"triangle is isosceles"<<"\n";
        }
        else if(t.scalene())
        {
            cout<<"triangle is scalene"<<"\n";
        }
    }
    catch(const triangle invalid)
    {
        cout<<"the triangle is not real!\n";
    }
    return 0;
}