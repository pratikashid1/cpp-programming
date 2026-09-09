#include <iostream>
using namespace std;

int main() {
    // Declaring and initializing a 2D array
    int matrix[3][4] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90, 10}
    };

    // Printing the elements
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // sizeof() operator
    cout << "Size of 2D array: " << sizeof(matrix) << endl;

    // access 3rd element from 1st row
    cout << "3rd element from 1st row before updating: " << matrix[0][2] << endl;

    // Update 3rd element in 1st row
    matrix[0][2] = 99;
    cout << "3rd element from 1st row: " << matrix[0][2] << endl;

    return 0;
}