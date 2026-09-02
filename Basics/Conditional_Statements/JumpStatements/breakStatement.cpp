#include <iostream>

int main() {

    for(int i = 1; i <= 10; i++) {

        if(i == 5) {
            break; // Terminate loop if i becomes 5
        } else {
            std::cout << "I = " << i << std::endl;
        }
    }
    return 0;
}