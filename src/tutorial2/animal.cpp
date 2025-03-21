#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;

public:
    // Default (no-arg) constructor
    Animal() {}

    // Parameterized constructor
    Animal(string nn) : name(nn) {
        cout << name << ": Making an animal.\n";
    }

    // Method for eating
    void eat() {
        cout << name << " is eating food.\n";
    }

    // Friend function declaration
    friend Animal duplicate(const Animal&);
};

// Definition of the duplicate function
Animal duplicate(const Animal& param) {
    Animal res;
    res.name = param.name + "'s clone";
    return res;
}

int main() {
    // Create an Animal object with a parameterized constructor
    Animal a("Henry");
    a.eat();

    // Create a duplicate using the duplicate function
    Animal b = duplicate(a);
    b.eat();

    return 0;
}
