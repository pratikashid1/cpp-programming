#include <iostream>
using namespace std;

int main() {
    typedef int arr[3];

    arr array1{1, 2, 3};

    cout << "Array Output: " << '\n';
    for(int i = 0; i < 3; i++) {
        cout << array1[i] << " " ;
    }
    cout << '\n';
    cout << '\n';

    arr matrix[3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            matrix[i][j] = i * j;
        }
    }

    cout << "Matrix output: " << '\n';

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }

        cout << '\n';
    }

    return 0;
}