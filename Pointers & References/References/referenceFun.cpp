#include <iostream>
using namespace std;

int& getMax(int &a, int &b) {
    // return largest number
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    int &maxValue = getMax(x, y);

    // modify largest value
    maxValue = 30;
    cout << "x = " << x << ", y = " << y;
    return 0;
}