#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40};

    auto it = lower_bound(vec.begin(), vec.end(), 25);

    cout << *it;

    return 0;
}