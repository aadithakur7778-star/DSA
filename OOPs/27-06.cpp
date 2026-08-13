#include<bits/stdc++.h>
using namespace std;

// wap to find cube using inline function and default argument
inline int cube(int n=6){
    return n*n*n;
}
//wap to print student info and keep branch as default argument
void printStudentInfo(string name, string branch="CSE"){
    cout<<"Name: "<<name<<endl;
    cout<<"Branch: "<<branch<<endl;
}
//wap to calculate area of rectangle,square,circle using function overloading
//for rectangle
double area(double length, double width){
    return length * width;
}
double area(int side){  //for square
    return side * side;
}
double area(double radius){  //for circle
    return 3.14 * radius * radius;
}

int main(){
    cout<<cube()<<endl;  // will use default argument
    cout<<cube(3)<<endl; // will use provided argument
    printStudentInfo("AADI");  //  default branch use hoga
    printStudentInfo("Aditya", "AIML");  // will use  jo branch hm denge
    cout<<"Area of rectangle: "<<area(5.0, 3.0)<<endl;
    cout<<"Area of square: "<<area(4)<<endl;
    cout<<"Area of circle: "<<area(2.0)<<endl;

    return 0;
}


