#include <iostream>
using namespace std;

struct Point {
    int x, y;

    // Member function
    int sum() {
        return x + y;
    }
};

int main() {
    Point p = {4, 6};

    // Call member function
    cout << p.sum() << endl;

    return 0;
}