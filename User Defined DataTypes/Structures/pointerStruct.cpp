#include <iostream>
using namespace std;

struct point {
    int count;

    void showcount() {
        cout << count << endl;
    }
};

int main() {

    point p = {10};

    // Creating Pointer
    point *ptr = &p;

    // Accessing using operator
    ptr -> showcount();

    return 0;
}