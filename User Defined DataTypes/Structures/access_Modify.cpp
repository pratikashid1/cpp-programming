#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main() {

    // Initialize 
    Point p = {5, 8};

    // Accessing members
    cout << p.x << " ";
    cout << p.y << endl;

    // Modify elements
    p.x = 9;
    p.y = 2;

    // Accessing modified members
    cout << p.x << " ";
    cout << p.y << endl;

    return 0;
}