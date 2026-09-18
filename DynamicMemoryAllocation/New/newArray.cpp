#include <iostream>
using namespace std;

int main() {

    // Declare pointer to 
    // to store address of allocated memory
    int *ptr;

    // allocate array with 5 elements
    ptr = new int[5]{10, 20, 30, 40, 50};

    // print array
    for(int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }

    return 0;
}