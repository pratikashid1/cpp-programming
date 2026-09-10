#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello Ram";

    // Extract "Hello"
    string sub1 = str.substr(0, 5);
    cout << "Substring 1: " << sub1 << endl;

    // Extract Geeks
    string sub2 = str.substr(6, 3);
    cout << "Substring 2: " << sub2 << endl;
    
    return 0;
}