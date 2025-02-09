/*
student: Dovydas Klisys
ID: B00165094
Date: 7th feb 2025
purpose: this code will prompt the user for two floating-point and store them in their respective variables.
The code will output certain details to do with the intgers entered by the user.*/

#include<iostream>

using namespace std;

//first variables are defined and user is asked to enter two floats
//code will determine which is smaller and larger value
//then it will print out the sum, difference, product and ratio each on different lines

int main()
{
    double val1;
    double val2;

    cout<<"Please enter two intgers.\n";
    cin>>val1>>val2;

    if(val1 > val2)
    {
        cout<<"smaller integer: "<<val2<<"\n";
        cout<<"larger integer: "<<val1<<"\n";
    }
    else
    {
        cout<<"smaller integer: "<<val1<<"\n";
        cout<<"larger integer: "<<val2<<"\n";
    }

    cout<<"sum: "<<val1 + val2<<"\n";
    cout<<"difference: "<<val1 - val2<<"\n";
    cout<<"product: "<<val1 * val2<<"\n";
    cout<<"ratio: "<<val1/val2;

    return 0;
}

//when comparing both int and float programs most values were calculated correctly.
//The only difference is the ratio.
//the integer program outputs only the amount of whole numbers from the division
//the float program outputs the answer as a decimal if no whole numbers enter the divided number.