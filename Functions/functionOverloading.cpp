#include <iostream>

int add (int a, int b) {
    return a + b ;
}

// Same name function but different parameters
int add (int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a = 10, b = 20, c = 30;
    
    // Function for add two number
    std::cout << add(a, b) << std::endl;

    // Function for add three numbers
    std::cout << add(a, b, c) << std::endl;

    return 0;
}