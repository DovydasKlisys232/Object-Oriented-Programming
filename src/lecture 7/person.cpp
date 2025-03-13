/*
Student: Dovydas Klisys
ID: B00165094
Date: 5 mar 2025
Purpose: This program will define a class that will contain private info of person's name, age and country. There will be functions to set and get the values for the
variables in the class.*/

#include<iostream>
#include<string>

using namespace std;

class person
{
    private:
        string name;
        int age;
        string country;
    public:
        void set_name(string n)
        {
            name = n;
        }
        void set_age(int a)
        {
            age = a;
        }
        void set_country(string c)
        {
            country = c;
        }

        string get_name() const {
            return name;
        }

        int get_age() const{
            return age;
        }

        string get_country() const{
            return country;
        }
};

int main()
{
    person p;

    p.set_name("John");
    p.set_age(33);
    p.set_country("Germany");

    cout<<"Name: "<<p.get_name()<<"\n";
    cout<<"Age: "<<p.get_age()<<"\n";
    cout<<"Country: "<<p.get_country()<<"\n";

    return 0;
}