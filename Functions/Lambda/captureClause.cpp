#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int>& v) {
    for(auto x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1, v2;

    // Capture all by reference
    auto byRef = [&](int m) {
        v1.push_back(m);
        v2.push_back(m);
    };

    // Capture all by value
    auto byVal = [=](int m) mutable {
        v1.push_back(m);
        v2.push_back(m);
    };

    // Capture v1 by reference and v2 by value
    auto mixed = [&v1, v2](int m) mutable {
        v1.push_back(m);
        v2.push_back(m);
    };

    // Case 1: byRef — modifies both v1 and v2
    byRef(20);

    // Case 2: byVal — modifies only copies (originals unchanged)
    byVal(234);

    // Case 3: mixed — modifies only v1 (since v2 is captured by value)
    mixed(10);

    print(v1);
    print(v2);

    return 0;
}