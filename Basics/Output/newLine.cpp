#include <iostream>

int main() {

    int x{5};

    std::cout << "X is equal to " << x << '\n'; // single quoted (by itself) (conventional)
    std::cout << "yep." << "\n" ;               // double quoted (by itself) (unconventional but okay)
    std::cout << "and thats all fine.\n";       // between double quotes in existing text (conventional)
}