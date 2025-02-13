/*
Student: Dovydas Klisys
ID: B00165094
Date: 13 feb 2025
Purpose: This program will ask the user to enter a set of name-value pairs until they cancel inputting with ctrl + d.
The program will store these inputs in two seperate vectors and then output them. If there is any duplicate names
the program will send out an error message and terminate the program.*/

#include<iostream> //used for utilizing standard library functions
#include<vector> //used for creating vectors
#include<algorithm> //used for accessing sort function

using namespace std;

void input(vector<string>& names, vector<int>& values); //input function decleration
bool isdouble(vector<string> names); //isdouble function decleration

//first the vectors are declared
//the user is asked to enter a set of names followed by values
//the user can enter as many names and values as they like and stop with ctrl + d.
//if any names are entered twice or more, the program will return an error message and terminate
//else the program outputs the set that was entered by the user

int main()
{
    vector<string> names;
    vector<int> values;
    cout<<"Please enter a set of names followed by values (ctrl + d to stop):\n";
    input(names, values);
    if(isdouble(names))
    {
        cerr<<"There is a name entered more than once";
        return 1;
    }
    else
    {
        cout<<"The set of names and values are:\n";
        for(int i=0; i<names.size(); i++)
        {
            cout<<names[i]<<' '<<values[i]<<"\n";
        }
    }
    return 0;
}

//this function will store the user's inputs into their respective vectors
//stops when user enters ctrl + d
void input(vector<string>& names, vector<int>& values)
{
    string name;
    int value;

    while(cin>>name>>value)
    {
        names.push_back(name);
        values.push_back(value);
    }
}

//this function will go through each name and check if there are any duplicates
//if there are duplicates then it will return true, else it will return false
bool isdouble(vector<string> names)
{
    sort(names.begin(), names.end());
    for(int i=0; i<names.size(); i++)
    {
        if(names[i] == names[i+1])
        {
            return true;
        }
    }
    return false;
}