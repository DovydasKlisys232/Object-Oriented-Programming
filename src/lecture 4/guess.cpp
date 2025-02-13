/*
Student: Dovydas Klisys
ID: B00165094
Date: 12 feb 2025
Purpose: This program will allow the user to enter a number between 1 and 100.
It will ask questions to try to figure out the user's number. The guess
will be produced before 7 questions.*/

#include<iostream> //used for utilizing standard library functions
#include<vector> //used for creating vectors

using namespace std;

int guess(); //guess function decleration

//first the user is told to think of a number
//later the function to ask questions is called
//the programs guess is stored in a result variable
//it will print out its guess and end the program
int main()
{
    cout<<"Think of a number between 1 and 100 for the program to guess.\n";
    int result = guess();
    cout<<"The number you are thinking of is "<<result;
    return 0;
}

//this function will ask yes or no questions for 6 turns
//it will ask if the user's number is below the middle value
//after each turn the mid point is modified depending on the answer
//after 6 turns the function returns a guess
int guess()
{
    int high = 100;
    int low = 1;
    char yn;
    int result;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        cout<<"Is your number below "<<mid<<"\n";
        cin>>yn;
        if(tolower(yn) == 'y')
        {
            high = mid - 1;
        }
        else if(tolower(yn) == 'n')
        {
            low = mid + 1;
        }
        else
        {
            cerr<<"Invalid response\n";
            return 1;
        }
        if(low == high)
        {
            result = mid;
            break;
        }
    }

    return result;

}