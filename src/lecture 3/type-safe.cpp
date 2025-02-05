/*
Student: Dovydas Klisys
ID: B00165094
Date: 5th feb 2025
Purpose: This program will try to copy the value of int a into char c and then put the value of c into int b.
What happens is that c can't be printed out because it contains an int when it can only hold char.
b prints the low byte of a because that is the part that fits into char c. It is printed out because the number is holds is an int.
*/

#include<iostream>

using namespace std;

int main()
{
    int a = 20000;
    char c = a;
    int b = c;
    if (a != b) {
    cout << "oops!: " << a << "!=" << b << '\n';
    }   
    else {
    cout << "Wow! We have large characters\n";
    }
    cout<<a<<" "<<c<<" ";
    return 0;
}
