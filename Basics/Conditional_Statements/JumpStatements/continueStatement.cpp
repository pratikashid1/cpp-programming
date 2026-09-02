#include <iostream>

int main() {

    for(int i = 1; i <= 10; i++) {

        if(i == 5) {
            continue; // Skip displaying 5
        } else {
            std::cout << "i = " << i << std::endl;
        }
    }

    return 0;
}