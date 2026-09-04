#include <iostream>
using namespace std;

// Arguments are pass by pointer
void change(int* a) {

    // modifying arguments
    *a = 22;
}

int main() {
    int x = 5;

    // passing address of x to change()
    change(&x);

    cout << x << endl;
    return 0;
}