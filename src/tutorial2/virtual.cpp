#include <iostream>
#include <string>
using namespace std;

class animal
{
    protected:
        string name;
    public:
        animal(string nn) : name(nn) {
            cout << name << ": Making an animal.\n";
        }
        virtual void eat() {cout << name << " is eating food.\n"; }
};

class cat : public animal
{
    public: 
        cat(string nn) : animal(nn) {
            cout << name << ": Making a cat.\n";
        }
        void eat() override{cout << name << " is chewing a rat.\n"; }
};

class dog : public animal
{
    public:
        dog(string nn) : animal(nn) {
            cout << name << ": Making a dog.\n";
        }
        void eat() override{cout << name << " is chewing on bone.\n"; }
};

int main()
{
    cat hh("henry");
    cat mm("Mr Snuffles");
    dog dd("Drake");
    cout<<"\n";

    animal *lunch_list[] = {&hh, &mm, &dd};
    for (int i=0; i<3; i++)
    {
        lunch_list[i]->eat();
    }
    return 0;
}