#include <iostream>
using namespace std;

// Function definition
void greet() {
    cout << "Welcome to cpp progeamming." << endl;
}

int multiply (int a, int b) {
    return a * b;
}

int main() {
    // Calling function
    greet();
    int result = multiply(5, 4);
    cout << "Multiplication result: " << result << endl;
    return 0;
}