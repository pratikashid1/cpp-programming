#include <iostream>
using namespace std;

int main() {

    // Create 3D array
    int arr[2][2][3] {
        {{1, 2, 3}, {3, 4, 6}},
        {{7, 8, 9}, {10, 11, 12}},
    };

    // Accessing element at depth 
    // 0, row 1, column 2
    cout << arr[0][1][2] << endl;
    
    // Accessing element at depth 
    // 1, row 0, column 1
    cout << arr[1][0][1] << endl;
    
    // Updating element at depth 
    // 0, row 1, column 2
    arr[0][1][2] = 22;
    cout << arr[0][1][2] << endl;
    
    // Updating element at depth \
    
    // 1, row 0, column 1
    arr[1][0][1] = 99;
    cout << arr[1][0][1];
    return 0;
}