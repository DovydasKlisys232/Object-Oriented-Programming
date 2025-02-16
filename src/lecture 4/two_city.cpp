/*
Student: Dovydas Klisys
ID: B0165094
Date: 12 feb 2025
Purpose: This program will read a sequence of distances into a vector and outputs the total sum of the distances (total distance).
It will also find the smallest and greatest distance between two cities as well as output mean distance.*/

#include<iostream> //used for copying standard library functions
#include<vector> //used for creating vectors
#include<algorithm> //used for functions such as sort

using namespace std;

double total(vector<double> distances); //total function decleration
double smallest(vector<double> distances); //smallest function decleration
double largest(vector<double> distances); //largest function decleration
double mean(vector<double> distances); //mean function decleration

//first the program declares a vector to store the distances and also a variable that represents the user's inputs
//the user is asked to enter distances between cities, the user must press ctrl + d to stop inputting
//when they do that, the program will output the total distance, mean, smallest distance and largest distance
//after that the program ends

int main()
{
    vector<double> distances;
    double dis;

    cout<<"Enter distances between cities in km.\n";
    while(cin>>dis)
    {
        distances.push_back(dis);
    }
    cout<<"Total distance: "<<total(distances)<<"\n"<<"Mean: "
        <<mean(distances)<<"\n"<<"Smallest: "<<smallest(distances)<<"\n"
        <<"Largest: "<<largest(distances)<<"\n";
    return 0;
}

//function that will calcuate total distance between cities
double total(vector<double> distances)
{
    double total = 0.0;
    for(int i=0; i<distances.size(); i++)
    {
        total += distances[i];
    }
    return total;
}

//function for determining which distance is the smallest
double smallest(vector<double> distances)
{
    for(int i=0; i<distances.size(); i++)
    {
        sort(distances.begin(),distances.end());
    }
    return distances[0];
}

//function for determining which distance is the largest
double largest(vector<double> distances)
{
    double largest=0;
    for(int i=0; i<distances.size(); i++)
    {
        if(distances[i] > largest)
        {
            largest = distances[i];
        }
    }
    return largest;
}

//function that will find the mean distance between cities
double mean(vector<double> distances)
{
    return total(distances) / distances.size();
}

//Resource: https://www.w3schools.com/cpp/cpp_examples.asp