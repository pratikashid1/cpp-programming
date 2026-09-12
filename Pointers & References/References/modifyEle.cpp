#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vect{10, 20, 30, 40, 50};

    // modify elements
    for(int& x : vect) {
        x += 5;
    }

    for(int x : vect) {
        cout << x << " ";
    }

    return 0;
}