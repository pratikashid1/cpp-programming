#include <iostream>
using namespace std;

union Student {
    int rollNo;
    float height;
    char firstletter;
};

int main() {
    Student data;

    data.rollNo = 123;
    cout << "Roll No: " << data.rollNo << endl;

    data.height = 5.6;
    cout << "Height: " << data.height << endl;

    data.firstletter = 'N';
    cout << "First Letter: " << data.firstletter;

    return 0;
}
