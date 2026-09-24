#include <iostream>
using namespace std;

class Vehicle {
    public:
    Vehicle() {
        cout << "this is vehicle" << endl;
    }
};

class Fare {
    public:
    Fare() {
        cout << "Fare of vehicle" << endl;
    }
};

class Car : public Vehicle {
    public:
    Car() {
        cout << "this is car" << endl;
    }
};

class Bus : public Vehicle, public Fare {
    public:
    Bus() {
        cout << "This is Bus" << endl;
    }
};

int main() {
    Bus b;
    return 0;
}