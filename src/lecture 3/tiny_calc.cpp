/*
Student: Dovydas Klisys
ID: B00165094
Date: 8th feb 2025
Purpose: This is a program that will prompt the user for an operation and then two operands to
perform the operation on. It will output the result of the operation.*/

#include<iostream>

using namespace std;

//first variables are declared and user is prompted to enter operation and operands
//conditionals determine which mathematical operation to execute depending on user's operation
//result is printed out and program ends
//if anything but the basic maths operations is entered first, user told operation entered is invalid

int main()
{
    char operation;
    float operand1;
    float operand2;

    cout<<"Enter a mathematical operation symbol followed by two operands: \n";
    cin>>operation>>operand1>>operand2;

    if(operation == '+')
    {
        cout<<"result: "<<operand1 + operand2;
    }
    else if(operation == '-')
    {
        cout<<"result: "<<operand1 - operand2;
    }
    else if(operation == 'x')
    {
        cout<<"result: "<<operand1 * operand2;
    }
    else if(operation == '/')
    {
        cout<<"result: "<<operand1 / operand2;
    }
    else{
        cout<<"invalid operation entered!";
    }
    return 0;
}