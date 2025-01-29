
#include<iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Enter an integer\n";
    cin>>a;
    cout<<"Enter another integer\n";
    cin>>b;
    cout<<"the first number entered is "<<a<<"\n";
    cout<<"the second number entered is "<<b<<"\n";
    cout<<a<<" divided by "<<b<<" is "<<a/b<<" remainder "<<a%b;
    return 0;
}