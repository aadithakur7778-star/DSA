//create a variadic function to calculate the sum of squares of all the arguments passed to it
#include<bits/stdc++.h>
using namespace std;
int sum_of_squares(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        total += num * num;
    }
    va_end(args);
    return total;
}
int main() {
    cout << sum_of_squares(3, 2, 3, 4) << endl; // Output: 29 (2^2 + 3^2 + 4^2)
    return 0;
}