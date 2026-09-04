#include <iostream>
using namespace std;

// Arguments pass by value
void change(int a) {
    a = 20;
}

int main() {
    int x = 5;

    // Passing x by value to change()
    change(x);

    cout << x << endl;
    return 0;
}