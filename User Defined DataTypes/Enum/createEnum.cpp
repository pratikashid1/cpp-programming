#include <iostream>
using namespace std;

enum direction {
    EAST,
    WEST,
    SOUTH,
    NORTH
};

int main() {
    // Creating Enum variable
    direction dir = NORTH;

    cout << dir ;
    return 0;
}