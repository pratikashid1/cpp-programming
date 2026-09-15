#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    typedef map<int, string> mp;
    mp m {{1, "Pratik"}, {2, "Rahul"}, {3, "Ram"}};

    for(auto& p : m) {
        cout << p.first << " " << p.second << '\n' ;
    }

    return 0;
}