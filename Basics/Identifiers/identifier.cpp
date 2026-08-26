#include <iostream>

// Class identifier
class Student
{
    public:
    // Method identifier
    void show() 
    {
        // vaiable identifier
        int marks = 90;
        std::cout << "Student marks: " << marks;
    }
};

int main()
{
    // Object identifier
    Student s1;
    s1.show();

    return 0;
}