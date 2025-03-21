#include <iostream>
using namespace std;

// Function with default arguments
void printMessage(string message = "Hello, World!", int count = 1) {
    for (int i = 0; i < count; ++i) {
        cout << message << endl;
    }
}

int main() {
    // Call the function without arguments
    printMessage(); // Uses default values: "Hello, World!" and 1

    // Call the function with one argument
    printMessage("Hi there!"); // Uses default value for count: 1

    // Call the function with both arguments
    printMessage("C++ is fun!", 0); // Uses provided values

    return 0;
}