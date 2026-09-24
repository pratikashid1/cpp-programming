#include <iostream>
using namespace std;

class Vehicle {
    public:
    Vehicle() {
        cout << "This is vehicle" << endl;
    }
};

class Car : public Vehicle {
    public:
    Car() {
        cout << "This is car" << endl;
    }
};

class Bus : public Vehicle {
    public:
    Bus() {
        cout << "This is bus" << endl;
    }
};

int main() {
    Car c;
    Bus b;

    return 0;
}