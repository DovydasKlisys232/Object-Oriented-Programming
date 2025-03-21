#include <iostream>
#include <string>
using namespace std;

class Animal {

protected:
    string name; // Protected member

public:
    // Constructor with initializer list
    Animal(string nn) : name(nn) {
        cout << name << ": Making an animal.\n";
    }

    ~Animal() { cout << "Bye bye Animal " << name << ".\n"; }

    // Method for eating
    void eat() {
        cout << name << " is eating food.\n";
    }

    // Method to get the name
    string get_name() {
        return name;
    }
};

class Cat : public Animal { // Derived class
public:
    //desctuctor calling the base class destructor
    ~Cat() { cout << "Bye bye Cat " << name << ".\n"; }

    // Constructor calling the base class constructor
    Cat(string nn) : Animal(nn) {
        cout << name << ": Making a cat.\n";
    }

    // Method for purring
    void purr() {
        cout << get_name() << ": purr purrr...\n";
    }
};

int main() {
    // Create an Animal object
    Animal a("Henry");
    a.eat();

    // Create a Cat object
    Cat c("Mr Twizzle");
    c.eat();
    c.purr();

    return 0;
}
