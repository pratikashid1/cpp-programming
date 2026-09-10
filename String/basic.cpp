#include <iostream>
using namespace std;

int main() {
    // Create String
    string str = "Hello developer !";

    // Traversing using index
    cout << "index based: ";
    for(int i = 0; i < str.size(); i++) {
        cout << str[i] ;
    }
    cout << endl;

    // Traversing using range-based for loop
    cout << "Range based: ";
    for(char ch : str) {
        cout << ch;
    }
    cout << endl;

    // Traversing using iterator
    cout << "Using iterator: ";
    for(auto it = str.begin(); it != str.end(); it++) {
        cout << *it ;
    }
    cout << endl;

    return 0;
}