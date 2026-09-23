#include <bits/stdc++.h>
using namespace std;

class Base {
    public:

    // virtual function
    virtual void display() {
        cout << "Base class function";
    }
};

class Derived : public Base {
    public:

    // Overrinding the Base class
    void display() override {
        cout << "Derived class function";
    }
};

int main() {
    // creating a pointer
    Base* b;

    // creating object
    Derived d;

    b = &d;

    b -> display();

    return 0;
}