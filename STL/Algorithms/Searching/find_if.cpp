#include <bits/stdc++.h>
using namespace std;

bool isOdd (int n) {
    return n % 2;
}

int main() {
    vector<int> vec = {10, 20, 21};

    vector<int>::iterator it;

    it = find_if(vec.begin(), vec.end(), isOdd);

    cout << "first odd number: " << *it ;

    return 0;
}