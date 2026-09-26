#include <iostream>
using namespace std;

template <typename T> T MyMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << "Max of 3 and 7 is: " << MyMax<int>(3, 7) << endl;  
    cout << "Max of 3.5 and 7.5 is: " << MyMax<double>(3.5, 7.5) << endl;
    cout << "Max of 'g' and 'e' is: " << MyMax<char>('g', 'e') << endl;

    return 0;
}