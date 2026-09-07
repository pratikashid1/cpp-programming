#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    // Size of one element of an array
    cout << "Size of arr[0]: " << sizeof(arr[0]) << endl;

    // Size of Array
    cout << "Size of Array: " << sizeof(arr) << endl;

    int n = sizeof(arr) / sizeof(arr[0]);

    // Length of array
    cout << "Length of array: " << n << endl;
    
    return 0;
}