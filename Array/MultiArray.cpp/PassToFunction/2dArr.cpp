#include <iostream>
using namespace std;

// Function to print 2d array
void printArr(int arr[2][3]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Initializing a 2d array
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // passing to function
    printArr(arr);

    return 0;
}