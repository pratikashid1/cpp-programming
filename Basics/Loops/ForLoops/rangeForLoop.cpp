#include <iostream>
#include <vector>
using namespace std;

//Range based for loop

int main () {
    vector<int> v = {1, 2, 3, 4, 5};

    // Iterating through vector
    for(int i : v) {
        cout << i << " ";
    }

    return 0;
}