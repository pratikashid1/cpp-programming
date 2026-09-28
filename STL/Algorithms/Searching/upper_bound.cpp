#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    auto it = upper_bound(v.begin(), v.end(), 30);

    cout << *it;

    return 0;
}