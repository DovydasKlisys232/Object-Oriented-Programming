/*
Student: Dovydas Klisys
ID: B00165094
Date: 13 feb 2025
Purpose: This program is a modified version of the name-value_v1.cpp program that allows the user to enter a score value and then
outputs a name that corresponds to that score or tells the user there is no name with that value.*/

#include<iostream> //used for utilizing standard library functions
#include<vector> //used for creating vectors
#include<algorithm> //used for accessing sort function
#include<string> //used for string comparison
#include<limits> //provides information about the numerical limits of various data types 

using namespace std;

void input(vector<string>& names, vector<int>& values); //input function decleration
bool isdouble(vector<string> names); //isdouble function decleration
void score(vector<string>& names, vector<int>& values, int user); //score function delceration

//first vector and variables are declared
//the user is asked to enter names followed by values, they can input as many as they like
//they can stop inputting by entering ctrl + d
//Program will then ask user for a value
//program will output a name that links to the value entered and ends
//if value doesn't exist then program ends with an error message
int main()
{
    vector<string> names;
    vector<int> values;
    int user;
    cout<<"Please enter a set of names followed by values (ctrl + d to stop):\n";
    input(names, values);
    if(isdouble(names))
    {
        cerr<<"There is a name entered more than once";
        return 1;
    }
    else
    {
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
    cin.clear(); //used to clear the fail state of cin after ctrl + d
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clears any remaining input in the buffer
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

//this function asks the user for a value to obtain a corresponding name
//if the values doesn't link to any name then it will return an error message
void score(vector<string>& names, vector<int>& values, int user)
{
    cout<<"enter a value to see corresponding name.\n";
    cin>>user;
    int result = 0;
    for(int i=0; i<values.size(); i++)
    {
        if(user == values[i])
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

//resource: https://claude.ai/chat/e9dfd87f-3d4b-4f00-8a1c-1bed98c12f43
//resource: https://www.w3schools.com/cpp/cpp_examples.asp