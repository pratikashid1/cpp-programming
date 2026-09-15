#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 20;

    typedef int* iptr;

    iptr point_to_a = &a;
    iptr point_to_b = &b;

    cout << "a value: " << *point_to_a << '\n';
    cout << "b value: " << *point_to_b ;

    return 0;
}