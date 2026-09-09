#include <iostream>
using namespace std;

// Function to print 3d array
void printArray(int arr[2][2][3]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 3; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    // Initializing array
    int arr[2][2][3] = {
        {
            {1, 2, 3},
            {3, 4, 5}
        },
        {
            {6, 7, 8},
            {8, 9, 5}
        }
    };

    // pass to function
    printArray(arr);

    return 0;
}