/*
Student: Dovydas Klisys
ID: B00165094
Date: 18 Mar 2025
Purpose: this is a simple program that writes to a text file. It will take in a time and temperature that it will then place into the text file.*/

#include<iostream>
#include<fstream>

using namespace std;

class invalid { };

int main()
{
    double temperature;
    double time;
    try
    {
        ofstream ost("myfile.txt");
        if (!ost) {
            cerr << "Error opening file!\n";
            return 1;
        }
        while(cin>>time>>temperature)
        {
            if(time > 24 || time < 0)
            {
                throw invalid();
            }
            ost << time << " " << temperature << "\n";
        }    
    }
    catch(invalid)
    {
        cerr << "incorrect time entered\n";
    }
    
    return 0;
}