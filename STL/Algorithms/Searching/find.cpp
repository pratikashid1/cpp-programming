#include <algorithm>
#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 10, 50};

    auto it = find(arr, arr + 5, 30);

    cout << distance(arr, it);

    return 0;
}