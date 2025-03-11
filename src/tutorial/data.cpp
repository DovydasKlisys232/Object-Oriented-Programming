#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Write to a binary file
    ofstream ofs("data.bin", ios_base::binary);
    if (!ofs) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    int intData = 12345;
    double doubleData = 67.89;
    string strData = "Hello";

    ofs.write(reinterpret_cast<char*>(&intData), sizeof(intData));
    ofs.write(reinterpret_cast<char*>(&doubleData), sizeof(doubleData));
    ofs.write(strData.c_str(), strData.size() + 1); // Include null terminator

    ofs.close();
    cout << "Data written to binary file." << endl;
    return 0;
}