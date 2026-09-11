// A static data member is shared by all objects of a class 

#include <iostream>
using namespace std;
class Student
{
    public:
        static int count; // static data member the role of static data member is to keep track of the number of objects created from the class
        int roll ;
        Student() { count++; 
            } // constructor increments count
};

int Student::count = 0; // initialize static data member
int main()
{
    Student s1, s2, s3; // create 3 objects of Student class
    cout << "Number of students: " << Student::count << endl; // access static data member using class name
    return 0;
}

      