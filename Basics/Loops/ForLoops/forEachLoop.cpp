#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printElement(int x) {
    cout << x << " ";
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    for_each(nums.begin(), nums.end(), printElement);

    return 0;
}