#include <iostream>
using namespace std;

enum fruit {
    MANGO,
    BANANA = 5,
    APPLE,
    ORANGE
};

int main() {
    // creating enum variable
    fruit f = BANANA;
    cout << f << endl;

    f = ORANGE;
    cout << f << endl;

    f = MANGO;
    cout << f;

    return 0;
}