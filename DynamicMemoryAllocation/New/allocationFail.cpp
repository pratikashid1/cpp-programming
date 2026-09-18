#include <iostream>
using namespace std;

int main() {

    int *ptr = new (nothrow) int;

    if(ptr == nullptr) {
        cout << "Failed to allocate !";
    }

    delete ptr;
    
    return 0;
}