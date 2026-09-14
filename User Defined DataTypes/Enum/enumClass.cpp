#include <iostream>
using namespace std;

enum class Day {
    SUNDAY = 1,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {

    // Initializing
    Day today = Day::THURSDAY;

    // Print the enum
    cout << static_cast<int>(today);

    return 0;
}