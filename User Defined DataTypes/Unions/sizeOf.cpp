#include <iostream>
using namespace std;

union A {
    int x;
    char y;
};

union B {
    int arr[40];
    char ch;
};

int main() {

    // Finding the size of array
    cout << "Size of A: " << sizeof(A) << endl;
    cout << "Size of B: " << sizeof(B);

    return 0;
}
