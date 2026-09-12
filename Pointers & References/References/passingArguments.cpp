#include <iostream>
using namespace std;

void modifyValue(int &x) {
    // modifies the original value
    x = 20;
}

int main() {
    int a = 10;

    // pass by reference
    modifyValue(a);

    cout << a;
    
    return 0;
}