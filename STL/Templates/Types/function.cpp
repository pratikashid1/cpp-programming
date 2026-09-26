#include <iostream>
using namespace std;

template <typename T> T MaxNum(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << "Max: " << MaxNum<int>(21, 43) << endl;
    cout << "Max: " << MaxNum<double>(12.43, 32.21) << endl;
    cout << "Max: " << MaxNum<char>('g', 'w') << endl;

    return 0;
}