#include <iostream>
using namespace std;

int main() {
    int *ptr = NULL;

    ptr = new int(5);

    if(!ptr) {
        cout << "Allocation of memeory failed !" << endl;
        exit(0);
    }

    cout << "Value of *p: " << *ptr << endl;

    // delete ptr when no neede
    delete ptr;

    // allocate an array
    ptr = new int[3];
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    cout << "Array: ";
    for(int i = 0; i < 3; i++) {
        cout << ptr[i] << " ";
    }

    // Deallocate
    delete[] ptr;

    return 0;
}