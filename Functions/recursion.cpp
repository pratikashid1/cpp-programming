#include <iostream>
using namespace std;

void printhello(int n) {
    // Base case
    if(n == 0) return;
    cout << "Hello" << endl;
    printhello(n - 1);
}

int main() {
    printhello(5);
    return 0;
}