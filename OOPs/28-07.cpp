write a calss employee with data members employee id ,name, salary define all member functions outside the class using  scope resolution operators.1st function accept ddetails 2nd function display the details 3rd function increase salary  by 10%
#include<bits/stdc++.h>
using namespace std;    
class Employee {
    int employeeId;
    string name;
    double salary;

public:
    void acceptDetails();
    void displayDetails();
    void increaseSalary();
};
void Employee::acceptDetails() {
    cout << "Enter Employee ID: ";
    cin >> employeeId;
    cout << "Enter Employee Name: ";
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, name);
    cout << "Enter Employee Salary: ";
    cin >> salary;
}
void Employee::displayDetails() {
    cout << "Employee ID: " << employeeId << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Employee Salary: " << salary << endl;
}
void Employee::increaseSalary() {
    salary += salary * 0.10; // Increase salary by 10%
}
int main() {
    Employee emp;
    emp.acceptDetails();
    emp.displayDetails();
    emp.increaseSalary();
    cout << "After salary increase:" << endl;
    emp.displayDetails();
    return 0;
}
