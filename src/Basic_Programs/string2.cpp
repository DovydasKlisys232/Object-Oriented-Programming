/*This is another program that works with a string, but here it will take in a string
and print it out with the length of itself.*/

#include<iostream>

using namespace std;

int main()
{
    string value;
    cout<<"Please enter a random string.\n";
    cin>>value;
    cout<<value<<", length = "<< value.size();
    return 0;
}