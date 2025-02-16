/*
Student: Dovydas Klisys
ID: B00165094
Date: 12 feb 2025
Purpose: This program will ask the user for temperatures until they type ctrl + d to stop inputting. 
It will calculate the mean and median of the temperatures and output these stats.*/

#include<iostream> //used for utilizing standard library functions
#include<vector> //used for creating vectors 
#include<algorithm> //used for utilizing the sort function

using namespace std;

double mean(vector<double> temps); //mean function decleration
double median(vector<double> temps); //median function decleration

//first the vector to store the temperatures as well as the user input variable is declared
//the user will be prompted to enter a list of temperatures, to stop inputting they must enter ctrl + d
//the functions will calculate the mean and median
//it will output these stats and end the program

int main()
{
    vector<double> temps;
    double temp;

    cout<<"Enter a list of temperatures:\n";

    while(cin>>temp)
    {
        temps.push_back(temp);
    }
    cout<<"Mean: "<<mean(temps)<<"\n"
        <<"Median: "<<median(temps);

    return 0;
}

//this function will calculate the mean for the temperatures entered
double mean(vector<double> temps)
{
    double total;
    for(int i=0; i<temps.size(); i++)
    {
        total += temps[i];
    }
    return total / temps.size();
}

//this function will calculate the median by determining if the list of numbers are even or odd
double median(vector<double> temps)
{
    sort(temps.begin(), temps.end());
    if(temps.size() % 2 == 0)
    {
        return (temps[(temps.size() / 2) - 1] + temps[(temps.size() / 2)]) / 2.0;
    }
    else
    {
        return temps[temps.size() / 2];
    }    
}

//Resource: https://www.w3schools.com/cpp/cpp_examples.asp