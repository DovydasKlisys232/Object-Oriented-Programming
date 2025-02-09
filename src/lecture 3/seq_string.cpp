/*
Student: Dovydas Klisys
ID: B00165094
Date: 8th feb 2025
Purpose: This program is a modified version of the seq_ints.cpp file but instead of ints it takes in strings.
It will print out the strings out in a sequence in alphabetical order*/

#include<iostream> //used for standard library functions
#include<vector> //used for the vector function
#include<algorithm> //used for functions such as sort

using namespace std;

//first string vector and value variables are declared
//user is prompted to enter three strings
//values entered by user are pushed onto vector
//values in vector are outputed in a sequence (alphabetical order)

int main()
{
    vector<string> strings;
    string val;

    cout<<"Please enter three strings.\n";

    for(int i=0;i<3;i++)
    {
        cin>>val;
        strings.push_back(val);
    }

    cout<<"sequence: ";

    for(int i=0;i<3;i++)
    {
        sort(strings.begin(),strings.end());
        cout<<strings[i];
        if(i<2)
        {
            cout<<",";
        }
    }

    return 0;
}