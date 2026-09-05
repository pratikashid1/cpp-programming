#include <iostream>
using namespace std;

int nested(int n) {
    if(n > 100) {
        return n - 10;
    }

    // Recursion call inside another recursion call
    return nested(nested(n + 11));
}

int main() {
    cout << nested(95);
    return 0;
}