#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Pratik ";
    string str1 = "Kashid";

    // Using + operator
    string result = str + str1;
    cout << "Concatenation using +: " << result << endl;

    // using append() function
    string result1 = str;
    result1.append(str1);
    cout << "Concatenation using .append(): " << result1 << endl;
    return 0;
}