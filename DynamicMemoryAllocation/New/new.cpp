#include <iostream>
using namespace std;

int main() {

    // Declare a pointer to store
    // address of the allocate memory
    int *ptr;

    // allocate and initialize memory
    ptr = new int(6);

    // print the value
    cout << "Value: " << *ptr << endl;

    // print the address
    cout << "Memory Address: " << ptr;

    return 0;
}