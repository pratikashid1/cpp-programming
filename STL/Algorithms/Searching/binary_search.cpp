#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    int target = 50;

    if(binary_search(vec.begin(), vec.end(), target)) {
        cout << "Found";
    } else {
        cout << "Not found";
    }

    return 0;
}