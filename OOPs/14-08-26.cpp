// write a program to display the employee detail : id name salary create a class employee and use arrow operator for accessing the class members
#include<bits/stdc++.h>
using namespace std;
class Employee {
public:
    int id;
    string name;
    double salary;

    Employee(int empId, string empName, double empSalary) {
        id = empId;
        name = empName;
        salary = empSalary;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};
int main() {
    Employee* emp = new Employee(101, "Aadi", 500000);
    emp->display(); //arrow operator ko use kiya
    // AISE BHI KR SKTE H (*ptr).display(); //ye bhi sahi hai
    delete emp; // yaha pe memory free kar diya
    return 0;
    //arrow ko use karne ka fayda ye hai ki hum pointer ke through class ke members ko access kar sakte hai
    //if detail for 50 student
    
}