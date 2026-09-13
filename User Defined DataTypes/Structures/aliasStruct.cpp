#include <iostream>
using namespace std;

typedef struct Point {
    int x, y;

    // Alias
} green;

int main() {

    // Using alias
    green g = {2, 3};
    
    cout << g.x << " " << g.y << endl;

    return 0;
}