// create a class number and write a function that returns the object only which contains the value 100
#include <iostream>
using namespace std;
class Number
{
   
    public:
     int value;
    Number GetNumber()
    {
        Number x;
        x.value=100;
        return x;
    }   
    int display()
    {
        return value;
    }
};
int main()
{
    Number n1;
   Number n = n1.GetNumber();
    cout << "The value of the returned object is: " << n.display() << endl;
    return 0;
}
// create a class number containing a number  pass to obj. to a func and add their values and return the result as obj.