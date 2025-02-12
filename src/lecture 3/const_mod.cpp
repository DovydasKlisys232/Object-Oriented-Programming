/*
Student: Dovydas Klisys
ID: B00165094
Date: 5th feb 2025
Purpose: this program is used to take a working program and introduce a bug to understand how a certain section works.
The result shows that you are not able to modify constants in programs since they are meant to remain how they were declared.
*/

#include<iostream>

using namespace std;

int main()
{
    const double cm_per_inch = 2.54;
    int val;
    char unit;
    while (cin >> val >> unit) {
        cm_per_inch *= 2.0;
        if (unit == 'i') {
            cout << val << "in == " << val*cm_per_inch << "cm\n";
        } 
        else if (unit == 'c') {
            cout << val << "cm == " << val/cm_per_inch << "in\n";
        } 
        else {
        return 0;
        }
    }
}