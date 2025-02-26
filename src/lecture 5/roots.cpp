/*
Student: Dovydas Klisys
ID: B00165094
Date: 18 feb 2025
Purpose: this program will calculate the value for x for a quadratic equation. If the program detects no real roots
then it will produce and error message.
*/

#include<iostream>
#include<math.h>

using namespace std;

class bad_values{ };

void quad(double a, double b, double c); //quadratic equation function decleration
void results(double xmin, double xmax); //results function decleration

int main()
{
    double a,b,c;
    double xmin, xmax;
    try
    {
        cin>>a>>b>>c;
        quad(a,b,c);
    }
    catch (bad_values)
    {
        cerr<<"No real roots entered";
    }
    return 0;
}

//function for calculating x values
//first checks if determinant is not below 0
//if below then there is an error
//else the x values are calculated and printed out
void quad(double a, double b, double c)
{
    double det = pow(b,2)-(4*a*c);
    if (det > 0)
    {
        double xmin = ((-b)-sqrt(det))/(2*a);
        double xmax = ((-b)+sqrt(det))/(2*a);
        cout<<"x is: "<<xmin<<" or "<<xmax<<"\n";
        results(xmin,xmax);
    }
    else
    {
        throw bad_values();
    }
}

//function to check if the x values aren't identical
//this means they are plausable answers
void results(double xmin, double xmax)
{
    if(xmax != xmin)
    {
        cout<<"Results are ok\n";
    }
    else
    {
        throw bad_values();
    }
}