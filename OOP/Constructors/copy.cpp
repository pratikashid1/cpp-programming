#include <iostream>
using namespace std;

class Demo {
    public:
    int val;

    // Parameterized constructor
    Demo(int x) {
        val = x;
    }

    // copy constructor
    Demo(Demo& d) {
        val = d.val;
    }
};

int main() {

    Demo d1(20);

    // creating another object
    Demo d2(d1);

    cout << d2.val;
    return 0;
}