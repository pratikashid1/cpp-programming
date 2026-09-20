#include <iostream>
using namespace std;

class Demo {
    public:
    int val;

    Demo(int x) {
        val = x;
    }
};

int main() {
    Demo d(10);

    cout << d.val;
    return 0;
}