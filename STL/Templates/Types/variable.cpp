#include <iostream>
using namespace std;

template <typename T> constexpr T pi = T(3.14159);

int main() {
    cout << "Pi is float: " << pi<float> << endl;
    cout << "Pi is double: " << pi<double> << endl;

    return 0;
}