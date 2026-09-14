#include <iostream>
using namespace std;

union Employee {
    int id;
    char name[20];

    // Nested union
    union patment {
        float hourly;
        float salary;
    } pay;
};

int main() {
    Employee e1;

    e1.id = 101;

    // access union memebers using . operator
    e1.pay.hourly = 300.21;

    cout << "Employee id: " << e1.id << endl;
    cout << "Employee hourly pay: " << e1.pay.hourly;

    return 0;
}