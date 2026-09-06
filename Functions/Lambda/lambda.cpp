#include <iostream>
using namespace std;

int main() {
    // defining lambda
    auto res = [] (int x) {
        return x * x;
    };

    // Using the lambda 
    cout << res(5) << endl;
    return 0;
}