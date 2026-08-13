//create a variadic function to join multiple strings passed as arguments
#include <bits/stdc++.h>
using namespace std;

string join_strings(int count, ...) {
    va_list args;
    va_start(args, count);
    string result = "";
    for (int i = 0; i < count; i++) {
        result += va_arg(args, const char*);
    }
    va_end(args);
    return result;
}

int main() {
    cout << join_strings(3, "Hello, ", "world!", " How are you?") << endl;
    return 0;
}