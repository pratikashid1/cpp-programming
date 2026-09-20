#include <iostream>
using namespace std;

class Dog {
    public:
    string name;
    string breed;

    void display() {
        cout << "Dog name: " << name << endl;
        cout << "Dong Breed: " << breed << endl;
    }
};

int main() {

    Dog d;

    d.name = "Tuffy";
    d.breed = "Papillon";

    d.display();
    return 0;
}