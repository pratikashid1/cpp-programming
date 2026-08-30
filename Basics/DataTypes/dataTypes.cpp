#include <iostream>

int main() {
    // Basics Data Types

    char ch = 'A';       // 1 byte (8 bits)
    bool isFine = true;  // 1 Byte (8 bits)
    int num = 10;        // 4 Bytes (32 bits)
    float f = 10.4f;     // 4 Bytes (32 bits)
    double d = 382.322;  // 8 Bytes (64 bits)
    
    // Derived Data Types
    int arr[5] = {1, 2, 3, 4, 5}; // Array 

    int x = 10;
    int* ptr = &x; // Pointer

    int & ref = x; // Reference
    return 0;
}