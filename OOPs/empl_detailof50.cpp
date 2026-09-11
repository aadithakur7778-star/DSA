#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    void show() {
        cout << "Roll No: " << rollNo << "\tName: " << name << endl;
    }
};

int main() {
    Student s[50];   // array of 50 Student objects

    for (int i = 0; i < 50; i++) {
        cout << "Enter details of student No. : " << i + 1 << endl;
        s[i].input();
          s[i].show();
    }

    cout << "\nStudent records:\n";
    for (int i = 0; i < 50; i++) {
        s[i].show();
    }

    return 0;
}