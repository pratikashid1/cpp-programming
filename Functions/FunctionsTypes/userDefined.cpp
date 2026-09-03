#include <iostream>
using namespace std;

// User defined function
int square(int x) {
    return x * x;
}

int main() {

    // Calling function
    cout << "Square: " << square(6) << endl;

    return 0;
}