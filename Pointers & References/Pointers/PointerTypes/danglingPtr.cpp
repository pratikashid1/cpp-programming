#include <iostream>
using namespace std;

int* getpointer() {
    int x = 10;

    // Returning address of local variable
    return &x;
}
int main() {

    // ptr becomes dangling here
    int* ptr = getpointer();

    // Undefined behavior
    // cout << *ptr << endl;
    return 0;
}