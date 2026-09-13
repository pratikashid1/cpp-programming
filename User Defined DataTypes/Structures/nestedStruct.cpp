#include <iostream>
using namespace std;

// inner structure
struct inner {
    int x, y;
};

// Outer Structure
struct outer {
    inner in;
    int x, y;
};

int main() {
    outer out = {{19, 20}, 4, 5};
    cout << "Inner: " << out.in.x << " " << out.in.y << endl;
    cout << "outer: " << out.x << " " << out.y << endl;
    
    return 0;
}