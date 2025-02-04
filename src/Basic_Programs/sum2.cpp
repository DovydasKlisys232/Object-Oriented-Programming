/*This is a program that builds onto the previous sum c++ program but 
includes a sum() function to add the values entered and then prints out the sum in 
the main function.*/

#include<iostream>

using namespace std;

double sum(double val1, double val2, double val3);  //decleration of the sum function

int main()
{
    double val1;    //stores the first value as a double
    double val2;    //stores the second value as a double
    double val3;    //stores the third value as a double

    cout<<"Please enter three numbers.\n";  //prompts user to enter three values
    cin>>val1>>val2>>val3;   //user can enter three values to be stored as doubles

    cout<<"The sum is equal to "<< sum(val1, val2, val3);  //prints out the sum
    return 0;   //program ends without errors
}

//function to add the three double ints and produce a sum
double sum(double val1, double val2, double val3)
{
    return val1 + val2 + val3; //this will return the three values added together
}