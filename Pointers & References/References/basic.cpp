#include <iostream>
using namespace std;

int main() {
    int x = 10;

    // ref is reference to x
    int& ref = x;

    // Printing value using ref
    cout << ref << endl;

    // chaning value and printing again
    ref = 20;
    cout << ref << endl;

    // Changed original value
    cout << x << endl;

    return 0;
}