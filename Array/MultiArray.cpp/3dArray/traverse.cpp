#include <iostream>
using namespace std;

int main() {

    // Create 3d array
    int arr[2][2][3] = {
        {
            {10, 20, 30},
            {40, 50, 60}
        },
        {
            {70, 80, 90},
            {40, 50, 60}
        }
    };

    // Traversing array
    for(int i = 0; i < 2; i++) { // for depth
        for(int j = 0; j < 2; j++) { // for rows
            for(int k = 0; k < 3; k++) { // for columns
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
    }
}