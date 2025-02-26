/*
Student: Dovydas Klisys
ID: B00165094
Date: 20 feb 2025
Purpose: This is the main c++ program that will utilize two functions (from_euro and to_euro) to provide currency conversion.
It will only work for a couple of currencies that are specified in the CA01 specification. The user will be able to enter an amount and a currency and asked
if they want to convert to euro or convert euro into a new currency. If the values entered by the user inappropriate for the program then it will terminate
the rest of the program with an error message.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

//bad_input class and two functions declared
class bad_inputs{ };
float from_euro(float amount, string currency);
float to_euro(float amount, string currency);

//global variables for currency conversions
#define usd_per_euro 1.04
#define stg_per_euro 0.83
#define jpy_per_euro 158.05
#define cny_per_euro 7.59 

//first amount and currency variable are declared to store user's input
//a vector is declared to save each of the user's inputs converted to euro
//while the user keeps inputing, the program will try to convert the input of the specific currency to euro
//it will save the outputs of the conversion into the vector and sort it from smallest to largest
//The program will output the conversion and state which euro output is smallest and which is largest, so far
//If an error that is defined in the program occurs, the error class will be thrown and catched in the main function which will produce an error message

int main()
{
    float amount;
    string currency;
    vector<float> conversions;
    cout<<fixed<<setprecision(2);   
    cout<<"Enter an amount followed by the currency\n";
    while(cin>>amount>>currency)
    {
        try
        {
            float euro_value = to_euro(amount,currency);
            conversions.push_back(euro_value);
            sort(conversions.begin(), conversions.end());

            cout<<amount<<" "<<currency<<" is "<<euro_value<<" in euro\n";
            cout<<conversions[0]<<" is the smallest so far\n";
            float largest = 0;
            for(int i=0; i<conversions.size(); i++)
            {
                if(conversions[i] > largest)
                {
                    largest = conversions[i];
                }
            }
            cout<<largest<<" is the largest so far\n";
        }
        catch(bad_inputs)
        {
            cerr<<"The inputs can not be used to produce a correct conversion.\n";
        }
    }

    return 0;
}

//function for converting the euro input into a certain currency
float from_euro(float amount, string currency)
{
    if(amount < 0)
    {
        throw bad_inputs();
    }
    if(currency == "usd" || currency == "USD")
    {
        return amount * usd_per_euro;
    }
    else if(currency == "stg" || currency == "STG")
    {
        return amount * stg_per_euro;
    }
    else if(currency == "jpy" || currency == "JPY")
    {
        return amount * jpy_per_euro;
    }
    else if(currency == "cny" || currency == "CNY")
    {
        return amount * cny_per_euro;
    }
    else{
        throw bad_inputs();
    }
}

//function for converting an input of a certain currency into euro
float to_euro(float amount, string currency)
{
    if(amount < 0)
    {
        throw bad_inputs();
    }
    if(currency == "usd" || currency == "USD")
    {
        return amount / usd_per_euro;
    }
    else if(currency == "stg" || currency == "STG")
    {
        return amount / stg_per_euro;
    }
    else if(currency == "jpy" || currency == "JPY")
    {
        return amount / jpy_per_euro;
    }
    else if(currency == "cny" || currency == "CNY")
    {
        return amount / cny_per_euro;
    }
    else{
        throw bad_inputs();
    }
}

/*resource: https://www.w3schools.com/cpp/default.asp*/