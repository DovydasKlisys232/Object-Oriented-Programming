#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Read from a binary file
    ifstream ifs("data.bin", ios_base::binary);
    if (!ifs) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    int intData;
    double doubleData;
    char strData[100]; // Assume max string length is 100

    ifs.read(reinterpret_cast<char*>(&intData), sizeof(intData));
    ifs.read(reinterpret_cast<char*>(&doubleData), sizeof(doubleData));
    ifs.read(strData, 100); // Read the string (including null terminator)

    ifs.close();

    cout << "Integer: " << intData << endl;
    cout << "Double: " << doubleData << endl;
    cout << "String: " << strData << endl;

    return 0;
}