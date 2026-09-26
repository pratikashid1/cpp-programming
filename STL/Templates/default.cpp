#include <iostream>
using namespace std;

template <typename T1, typename T2 = double, typename T3 = string> 

class Demo {
    public:
    T1 x;
    T2 y;
    T3 z;

    Demo(T1 val1, T2 val2, T3 val3) : x(val1), y(val2), z(val3) {

    }

    void getVal() {
        cout << x << " " << y << " " << z;
    }
};

int main() {
    Demo<int, float, string> intDemo(10, 21.2f, "Hello");
    Demo<char> charDemo('A', 3.24, "World");

    intDemo.getVal();
    cout << endl;

    charDemo.getVal();

    return 0;
}