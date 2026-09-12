#include <iostream>
using namespace std;

int main() {
    int var = 10;

    // Store the address of var
    int* ptr = &var;
    int** ptr1 = &ptr;

    cout << *ptr << endl;
    cout << **ptr1;
}