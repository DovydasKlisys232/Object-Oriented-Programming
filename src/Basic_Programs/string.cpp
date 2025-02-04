/*this program will ask the user for both of their names and store them in strings. It 
will then print out their full name at the end.*/

#include<iostream>

using namespace std;

int main()
{
    string first;   //holds the first name entered
    string second;  //holds the second name entered
    cout<<"What is your first name?\n"; //asks the user to enter their first name
    cin>>first; //allows the user to enter their first name
    cout<<"What is your second name?\n";    //asks the user to enter their second name
    cin>>second;    //allows the user to enter their second name
    cout<<"Hello, "<<first + ' ' + second; //prints out the user's full name in standard output
    return 0; //program ends without errors
}