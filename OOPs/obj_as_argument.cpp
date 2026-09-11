// create a class in rectangle and pass through rectangle object as function to find which has the greater area 

#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:

    void enter()
    {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }

    int area()
    {
        return length * breadth;
    }

    void greaterArea(Rectangle r1, Rectangle r2)
    {
        if (r1.area() > r2.area())
            cout << "Rectangle 1 has greater area.";
        else if (r2.area() > r1.area())
            cout << "Rectangle 2 has greater area.";
        else
            cout << "Both rectangles have equal area.";
    }
};

int main()
{
    Rectangle r1, r2;

    r1.enter();
    r2.enter();

    r1.greaterArea(r1, r2);

    return 0;
}
 