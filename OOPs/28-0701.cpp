//write a c++ program to create a function that accepts an integer by refernce and increases its value by 20 display the value before and after the funciton calls give code wihtout comments
#include<bits/stdc++.h>
using namespace std;

void increaseBy20(int &n) {
    n += 20;
}

int main() {
    int value = 100;
    cout << "Value before function call: " << value << endl;
    increaseBy20(value);
    cout << "Value after function call: " << value << endl;
    return 0;
}