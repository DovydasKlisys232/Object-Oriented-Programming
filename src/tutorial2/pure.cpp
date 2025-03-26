#include<iostream>

using namespace std;

class Animal
{
    public:
        virtual void eat() = 0;
};

class Cat : public Animal
{
    public:
        void eat() { cout << "I'm eating a rat.\n"; }
};

int main()
{
    Cat c;
    Animal *pa = &c;
    pa->eat();
    return 0;
}

