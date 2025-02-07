/*
Student: Dovydas Klisys
ID: B00165094
Date: 7th feb 2025
Purpose: this program will output the users integer inputs in a numerical sequence.
If two values are the same, they will be outputed together. Each value is seperated 
by commas.*/

//need <algorithm> to use sort function
//need <vector> to utilize vectors in code

#include<iostream>
#include<algorithm>
#include<vector>

//first the vector and temporary value variables are defined
//for loop is used to push values onto the vector
//for loop is used to sort the vector in numerical order
//finally the code outputs the sequence in the correct order with commas to seperate each number

using namespace std;

int main()
{
    vector<int> integers;
    int val;

    for(int i=0;i<3;i++)
    {
        cin>>val;
        integers.push_back(val);
    }

    cout<<"sequence: ";

    for(int i=0;i<3;i++)
    {
        sort(integers.begin(),integers.end());
        cout<<integers[i];
        if(i<2)
        {
            cout<<",";
        }
    }

    return 0;
}