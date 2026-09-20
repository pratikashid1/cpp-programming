#include <iostream>
#include <vector>
using namespace std;

class Myclass {
    private:
    int b;

    public:
    // Constructor
    Myclass(int &&a) : b(move(a)) {
        cout << "Move constructor called !" << endl;
    }

    void display() {
        cout << b << endl;
    }
};

int main() {
    int a = 4;
    Myclass obj1(move(a));

    obj1.display();
    return 0;
}