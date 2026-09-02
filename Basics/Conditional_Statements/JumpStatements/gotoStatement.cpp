#include <iostream>
using namespace std;

int main() {
    int n = 4;
    if(n % 2 == 0) {
        // Jump to label1
        goto label1;
    } else {
        // jump to label2
        goto label2;
    }

    label1:
        cout << "Even" << endl;
        return 0;
    
    label2:
        cout << "Odd" << endl;
        return 0;

    label3:
        cout << "Undefined" << endl;
        return 0;
}