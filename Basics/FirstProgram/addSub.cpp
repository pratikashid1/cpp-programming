#include <iostream>

int main() {

    std::cout << "Enter a Number: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter a number: ";
    int y{};
    std::cin >> y;

    std::cout << "Addition: " << (x + y) << '\n';
    std::cout << "Subtraction: " << (x - y) << '\n';
    return 0;
}