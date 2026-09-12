#include <iostream>
using namespace std;

int main() {
    
    int var = 10;

    // void pointer holding address of int
    void* ptr = &var;

    // Error: void pointer cannot dereference
    // cout << *ptr << endl;

    // Typecasting
    cout << "void pointer point value: " << *(static_cast<int*>(ptr)) << endl;

    return 0;
}