#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    int* ptr = &a;
    cout << *ptr << endl;

    // changing the address
    ptr = &b;
    cout << *ptr << endl;

    return 0;
}