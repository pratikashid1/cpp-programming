#include <iostream>
using namespace std;

int main() {

    // Allocate memory
    int *ptr = new int[10];

    // Accessing Uninitialized memory
    cout << *(ptr + 2) << endl;
    
    // Initialize and accessing dynamic memory
    *(ptr + 3) = 10;
    cout << *(ptr + 3) << endl;

    // Deallocating memory
    delete[] ptr;
    ptr = NULL;

    cout << *(ptr + 3);

    return 0;
}