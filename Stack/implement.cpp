#include <bits/stdc++.h>
using namespace std;
class Stack {
    vector<int> v;
    public:
    void push(int data) {
        v.push_back(data);
    }
    void pop() {
         v.pop_back();
    }
    int top() {
        return v.back();
    }
    bool isEmpty() {
        return v.size()==0;
    }
};
int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}
