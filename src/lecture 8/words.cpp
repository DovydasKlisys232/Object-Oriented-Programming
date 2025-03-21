/*
Student: Dovydas Klisys
ID: B00165094
Date: 18 Mar 2025
Purpose: this is a simple program that will take a text file and tell you the number of words found in the file.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string s;
    int total = 0;

    ifstream ist("words.txt");
    if (!ist)
    {
        cerr << "Error opening file!\n";
        exit(-1);
    }

    while(ist >> s)
    {
        total++;
    }

    cout << total << "\n";
    
    return 0;
}