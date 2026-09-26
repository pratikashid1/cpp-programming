#include <iostream>
using namespace std;

template <typename T>
class Demo {
    public:
    T x;
    T y;

    Demo (T val1, T val2) : x(val1), y(val1) {

    }

    void getVal() {
        cout << x << " " << y;
    }
};

int main() {
    Demo<int> intDemo(10, 4);
    Demo<double> doubleDemo(23.5, 43.1);

    intDemo.getVal();
    cout << endl;

    doubleDemo.getVal();

    return 0;
}