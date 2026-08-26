#include <iostream>

int main() {

    // Literals are constant, variable can be changed through initialization

    std::cout << 5;
    std::cout << -4.2;
    std::cout << 'H';
    std::cout << "Hello";

    int x {5};
    std::cout << 5 << '\n'; // Print the value of literal
    std::cout << x << '\n'; // Print the value of variable



    return 0;
}