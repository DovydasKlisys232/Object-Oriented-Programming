/*
Student: Dovydas Klisys
ID: B00165094
Date: 13 feb 2025
Purpose: This program is a modified version of the last one, but this time it will ask for a name from the names enteres and outputs
the name and value if the name exists int the vector, else it will terminate.*/

#include<iostream> //used for utilizing standard library functions
#include<vector> //used for creating vectors
#include<algorithm> //used for accessing sort function
#include<string>

using namespace std;

void input(vector<string>& names, vector<int>& values); //input function decleration
bool isdouble(vector<string> names); //isdouble function decleration
void score(vector<string>& names, vector<int>& values, string user); //score function decleration

//first the vectors are declared
//the user is asked to enter a set of names followed by values
//the user can enter as many names and values as they like and stop with ctrl + d.
//if any names are entered twice or more, the program will return an error message and terminate
//else the program outputs the set that was entered by the user

int main()
{
    vector<string> names;
    vector<int> values;
    string user;
    cout<<"Please enter a set of names followed by values (ctrl + d to stop):\n";
    input(names, values);
    if(isdouble(names))
    {
        cerr<<"There is a name entered more than once";
        return 1;
    }
    else
    {
        cout<<"enter a name to see its value\n";
        score(names, values, user);
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

void score(vector<string>& names, vector<int>& values, string user)
{
    cin>>user;
    int result = 0;
    for(int i=0; i<names.size(); i++)
    {
        if(user == names[i])
        {
            result += 1;
            cout<<names[i] + ' ' + to_string(values[i]);
        }
    }
    if(result = 0)
    {
        cerr<<"Name not found";
    }
}