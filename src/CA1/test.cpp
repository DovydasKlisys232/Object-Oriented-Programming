
#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include"eurolib.h"

using namespace std;

float to_euro(float amount, string currency);


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
