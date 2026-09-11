// storage class specifier  that changes the lifetime and visibility of variables and functions
#include <iostream>
using namespace std;
void counter()
{
    static int count = 0; // static variable
    count++;
    cout << "Count: " << count << endl;
}
int main()
{
    counter(); // Count: 1
    counter(); // Count: 2
    counter(); // Count: 3
    return 0;
}