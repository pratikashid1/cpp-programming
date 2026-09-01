#include <iostream>
using namespace std;

int main() {
    int age = 25;

    // If-else ladder to check age group
    if(age < 13) {
        cout << "Child" << endl;
    }
    else if(age >= 1 and age <= 18) {
        cout << "Gowing age" << endl;    
    }
    else {
        cout << "Adult" << endl;
    }
    
    return 0;
}