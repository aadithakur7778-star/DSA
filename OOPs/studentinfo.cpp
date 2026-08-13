#include <iostream>
using namespace std;

class Student {
public:
    string name = "Aditya";
    int rollNo = 101;
    int age = 19;
    string course = "B.Tech CSE";
    int marks=92;

    void display() {
        cout << "Name      : " << name << endl;
        cout << "Roll No   : " << rollNo << endl;
        cout << "Age       : " << age << endl;
        cout << "Course    : " << course << endl;
        cout << "Marks     : " << marks << endl;
    }
};

int main() {
    Student s;
    s.display();

    return 0;
}