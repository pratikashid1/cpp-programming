#include <iostream>
using namespace std;

class Car {
    public:
        // Instance variable
        string brand;

        // Member function
        void display() {
            cout << "Car brand: " << brand << endl;
        }
};

int main() {

    // creating object
    Car c1;

    c1.brand = "Toyota";
    c1.display();

    return 0;
}