#include <iostream>
using namespace std;

void findNum(int n) {
    for(int i = 1; i <= 100; i++) {
        if(i == n) {
            cout << "Number in range [0, 100]";

            // Stop the function here
            return;
        }
    }
    cout << "Number not in range [0, 100]";

    // Final return when above one is not reached
    return;
}

int main() {
    int n = 10;

    // Calling function
    findNum(n);

    return 0;
}