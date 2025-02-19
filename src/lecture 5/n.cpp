/*
Student: Dovydas Klisys
ID: B00165094
Date: 19 feb 2025
Purpose: This program will allow te user to enter a number N in the command line and pass it as an argument.
The user will also be asked to enter some integers to be added together. N will specify how many of these numbers
will be added together. Common errors will be handled in this program.*/

#include<iostream> //used for standard library functions
#include<vector> //used for creating vectors
#include<cstdlib> //used to access atoi function

using namespace std;

class bad_numbers{ };
void input(vector<int>& numbers, int& num);
int sum(vector<int>& numbers,int size,int N);

int main(int argc, char *argv[])
{
    int size = argc-1;
    int N = atoi(argv[1]);
    vector<int> numbers;
    int num;    
    try
    {
        input(numbers,num);
        sum(numbers,size,N);
        cout<<"sum of "<<N<<" numbers is "<<sum(numbers,size,N);
    }
    catch(bad_numbers)
    {
        cerr<<"Arguments or numbers are incorrect";
    }
    return 0;
}

void input(vector<int>& numbers, int& num)
{
    cout<<"Enter a list of numbers to be added.\n";
    while(cin>>num)
    {
        numbers.push_back(num);
    }
}

int sum(vector<int>& numbers,int size, int N)
{
    int add = 0;
    if(size == 1)
    {
        if(N > numbers.size())
        {
            throw bad_numbers();
        }
        else
        {
            for(int i=0; i<N; i++)
            {
                add += numbers[i];
            }
            return add;
        }
    }
    else
    {
        throw bad_numbers();
    }
}