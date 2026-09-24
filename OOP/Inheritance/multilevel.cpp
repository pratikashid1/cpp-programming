#include <iostream>
using namespace std;

class Vehicle {
    public:
    Vehicle() {
        cout << "This is vehicle" << endl;
    }
};

class Fourwheeler : public Vehicle {
    public:
    Fourwheeler() {
        cout << "This is also fourwheeler" << endl;
    }
};

class Car : public Fourwheeler {
    public:
    Car() {
        cout << "This is Car" << endl;
    }
};

int main() {

    Car c;
    return 0;
}