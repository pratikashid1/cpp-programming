#include <iostream>
using namespace std;

template <typename t>

class Demo {
    public:
    t x;
    t y;
    
    Demo(t val1, t val2) : x(val1), y(val2) {

    }

    void getVal() {
        cout << x << " " << y;
    }
};

int main() {
    Demo intDemo(10, 20);
    Demo doubleDemo(21.23, 32.1);

    intDemo.getVal();
    cout << endl;

    doubleDemo.getVal();

    return 0;
}