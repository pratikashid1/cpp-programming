#include <iostream>
using namespace std;

class Base {
    public:
    int x;

    // parameterized constructor
    Base(int a) : x(a){};
};

class Derived : public Base {
    public:
        int y;
        using Base::Base;
};

int main() {

    Derived d(42);
    d.y = 12;

    cout << d.x << " " << d.y << '\n';
    return 0;
}