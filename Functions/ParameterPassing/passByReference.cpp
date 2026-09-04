#include <iostream>
using namespace std;

// Arguments are pass by reference
void change(int& a) {

    // Modifying arguments
    a = 20;
}

int main() {
    int x = 5;

    // passing x by reference to change()
    change(x);

    cout << x << endl;
    return 0;
}