/*
Student: Dovydas Klisys
ID: B00165094
Date: 4th feb 2025
Purpose: this program takes in three strings and combines them, it will also print its length of the new string.
*/

#include<iostream>

using namespace std;

int main()
{
    string a,b,c;
    cout<<"Enter three strings.\n";
    cin>>a>>b>>c;
    string add = a + b + c;
    cout<<"new string: "<<a + ' ' + b + ' ' + c<<" length: "<<add.size();
    return 0;
}