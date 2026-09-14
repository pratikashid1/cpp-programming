#include <iostream>
using namespace std;

struct Employee {
    int id;

    // anonymous union
    union {
        float hourly;
        float salary;
    };
};

int main() {
    Employee e1;
    e1.id = 121;

    // Access anonymous union
    e1.hourly = 233.11;

    cout << "Employee id: " << e1.id << endl;
    cout << "Employee hourly pay: " << e1.hourly;

    return 0;
}