#include <iostream>
using namespace std;

// Value provided for a parameter in a function
void f(int a = 5) {
    cout << a << endl;
}

int main() {
    f();
    f(210);
    return 0;
}