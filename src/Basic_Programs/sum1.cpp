/*This is a program that will take in three double ints and add them together. The resut will
be printed out in standard output.*/

#include<iostream>

using namespace std;

int main()
{
    double val1;    //stores the first value as a double
    double val2;    //stores the second value as a double
    double val3;    //stores the third value as a double

    cout<<"Please enter three numbers.\n";  //prompts user to enter three values
    cin>>val1>>val2>>val3;   //user can enter three values to be stored as doubles

    double sum = val1 + val2 + val3;    //sum variable holds all values entered by user added together
    cout<<"The sum is equal to "<<sum;  //prints out the sum
    return 0;   //program ends without errors
}