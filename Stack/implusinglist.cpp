#include<bits/stdc++.h>
using namespace std;

class Stack {
    list<int> l;
public:
    void push(int data) {
        l.push_back(data);
    }
    void pop() {
        l.pop_back();
    }
    int top() {
        return l.back();
    }
    bool isEmpty() {
        return l.empty();
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