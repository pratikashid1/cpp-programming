#include <bits/stdc++.h>
using namespace std;

class Sum {
    public:

    // Addition of two integers
    void add(int a, int b) {
        cout << "Integer Sum: " << a + b << endl;
    }

    // Addition of two doubles
    void add(double a, double b) {
        cout << "Double Sum: " << a + b << endl;
    }
};

int main() {
    Sum s;

    s.add(10, 5);

    s.add(10.4, 3.5);

    return 0;
}
