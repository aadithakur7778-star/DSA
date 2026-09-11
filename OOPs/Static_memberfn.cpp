#include <bits/stdc++.h>
using namespace std;
class maths{
    public:
        static int add(int a, int b); // static data member
        return a + b;
};
int main(){
    cout << maths::add(5, 10) << endl; // access static data member using class name
    return 0;
}