/*
Student: Dovydas Klisys
ID: B00165094
Date: 26 feb 2025
Purpose: this program introduces the concept of namespaces. There are three namespaces in this proram (x,y,z).*/

#include<iostream>

using namespace std;

namespace X
{
    int var;
    void print()
    {
        cout<<"value is: "<<var<<"\n";
    }
}

namespace Y
{
    int var;
    void print()
    {
        cout<<"value is: "<<var<<"\n";
    }
}

namespace Z
{
    int var;
    void print()
    {
        cout<<"value is: "<<var<<"\n";
    }
}

int main()
{
    X::var = 7;
    X::print();     // print X's var

    using namespace Y;

    var = 9 ;
    print();        // print Y's var

    {
        using Z::var;
        using Z::print;
        var = 11;
        print();    // print Z's var
    }

    print();        // print Y's var
    X::print();     // print X's var
}