#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Java Developer";

    // Access using [] operator
    cout << "First character: " << str[0] << endl;
    cout << "Sixth character: " << str[5] << endl;

    // Access using .at[] function
    cout << "Character at index 6: " << str.at(6) << endl;
    return 0;
}