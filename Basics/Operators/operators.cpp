#include <iostream>

int main() {

    int a = 5, b = 10;

    // Arithmetic Operators
    std::cout << "a + b = " << (a + b) << std::endl; // Addition
    std::cout << "a - b = " << (a - b) << std::endl; // Subtraction
    std::cout << "a * b = " << (a * b) << std::endl; // Multiplication
    std::cout << "a / b = " << (a / b) << std::endl; // Division
    std::cout << "a % b = " << (a % b) << std::endl; // Modulo

    // Unary Operators
    std::cout << "a++ = " << (a++) << std::endl; // Increment
    std::cout << "a-- = " << (a--) << std::endl; // Decrement

    // Relational Operator
    std::cout << "a == b = " << (a == b) << std::endl; // Equal
    std::cout << "a > b = " << (a > b) << std::endl; // Greater than
    std::cout << "a >= b = " << (a >= b) << std::endl; // Greater than Equal to
    std::cout << "a < b = " << (a < b) << std::endl; // Lesser than 
    std::cout << "a <= b = " << (a <= b) << std::endl; // Lesser than Equal to
    std::cout << "a != b = " << (a != b) << std::endl; // Not Equal to

    // Logocal Operators
    std::cout << "a && b = " << (a && b) << std::endl; // AND
    std::cout << "a || b = " << (a || b) << std::endl; // OR
    std::cout << "!b is = " << (!b) << std::endl; // Not

    // Bitwise Operators
    std::cout << "a & b = " << (a & b) << std::endl; // AND
    std::cout << "a | b = " << (a | b) << std::endl; // OR
    std::cout << "a ^ b = " << (a ^ b) << std::endl; // XOR
    std::cout << "a << 1 = " << (a << 1) << std::endl; // Left Shift
    std::cout << "a >> 1 = " << (a >> 1) << std::endl; // Right Shift
    std::cout << "~(a) = " << ~(a) << std::endl; // One's Compliment

    // Assignment Operators
    std::cout << "a += b = " << (a += b) << std::endl; // Add And Assign
    std::cout << "a -= b = " << (a -= b) << std::endl; // Subtract and Assign
    std::cout << "a /= b = " << (a /= b) << std::endl; // devide and subtract
    std::cout << "a *= b = " << (a *= b) << std::endl; // mulriply and subtract

    // Ternary OPerators
    int result = (a > b) ? a : b;
    std::cout << "Greater Number = " << result << std::endl;
    
    return 0;
}