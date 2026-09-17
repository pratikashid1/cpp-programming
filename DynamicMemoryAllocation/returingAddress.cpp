#include <iostream>
using namespace std;

int *fun() {
    int a = 10;
    int *ptr = &a;
    return ptr;
}

int main() {
    cout << *fun();
    return 0;
}