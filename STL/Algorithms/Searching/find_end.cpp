#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {10, 20, 30, 40, 50};
    vector<int> v2 = {60, 70, 80, 90, 10};

    vector<int>::iterator ip;

    ip = find_end(v1.begin(), v1.end(), v2.begin(), v2.end());

    cout << (ip - v1.begin()) << endl;

    return 0;
}