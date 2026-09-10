#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello geeks";

    size_t pos = str.find("geeks");

    if(pos < str.size()) {
        cout << "\"Geeks\" found at index: " << pos << endl;
    }

    return 0;
}