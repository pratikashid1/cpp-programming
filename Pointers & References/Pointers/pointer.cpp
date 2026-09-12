#include <iostream>
using namespace std;

int main() {
    int var = 10;

    // declare pointer and store address of var
    int* ptr = &var;

    // point value and address
    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value stored in pointer ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;
    
    return 0;
}