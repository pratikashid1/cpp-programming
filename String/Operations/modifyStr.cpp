#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello pratik";

    // Adding a character at the end
    str.push_back('!');
    cout << "After push_back: " << str << endl;

    // Removing the last character
    str.pop_back();
    cout << "After pop_back: " << str << endl;

    // Inserting a Substring
    str.insert(5, "C++");
    cout << "After inser: " << str << endl;

    // Erasing the part of the string
    str.erase(5, 4);
    cout << "After erase: " << str << endl;

    return 0;
}