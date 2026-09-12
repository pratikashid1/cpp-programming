#include <iostream>
using namespace std;

int main() {

    int var = 10;

    // Pointer
    int* ptr = &var;

    // access value using * operator
    cout << "address stored in ptr: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}