#include <iostream>
using namespace std;

int main() {

    // To check Number even or od or positive or negative
    int n = 55;

    if(n > 0) {
        if(n % 2 == 0) {
            cout << "Even or positive." << endl;
        }
        else {
            cout << "Odd or positive." << endl;
        }
    }
    else if (n == 0) {
        cout << "Number is 0." << endl;
    }
    else {
        cout << "Negative NUmber." << endl;
    }
    
    return 0;
}