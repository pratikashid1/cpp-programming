#include <iostream>
using namespace std;

template <typename t> t multiply(t a, t b) {
    return a * b;
}

int main() {
    cout << multiply(2, 5) << endl;
    return 0;
}