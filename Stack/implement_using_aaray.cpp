


#include <bits/stdc++.h>
using namespace std;

const int n = 5;
int stack[5];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == n - 1;
}

void push(int data) {
    if (isFull()) {
        cout << "Stack Overflow" << endl;
        return;
    }
    top++;
    stack[top] = data;
}

int pop() {
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    int data = stack[top];
    top--;
    return data;
}

int peek() {
    if (isEmpty()) {
        cout << "Stack is Empty" << endl;
        return -1;
    }
    return stack[top];
}

void display() {
    if (isEmpty()) {
        cout << "Stack is Empty" << endl;
        return;
    }

    cout << "Stack (Top to Bottom): ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

void traverse() {
    if (isEmpty()) {
        cout << "Stack is Empty" << endl;
        return;
    }

    cout << "Stack (Bottom to Top): ";
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, data;

    while (true) {
        cout << "\n===== STACK MENU =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Traverse\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to push: ";
                cin >> data;
                push(data);
                break;

            case 2:
                data = pop();
                if (data != -1)
                    cout << "Popped element: " << data << endl;
                break;

            case 3:
                data = peek();
                if (data != -1)
                    cout << "Top element: " << data << endl;
                break;

            case 4:
                display();
                break;

            case 5:
                traverse();
                break;

            case 6:
                cout << "Exiting..." << endl;
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int n =5;
// int stack[n];
// int top = -1;
// bool isEmpty() {
//     return top <= -1;
// }
// bool isFull() {
//     return top >= n-1;
// }
// void push(int data) {
//     if(isFull()) {
//         cout<<"Stack Overflow"<<endl;
//         return;
//     }
//     top++;
//     stack[top] = data;
// }
// int pop() {
//     if(isEmpty()) {
//         cout<<"Stack Underflow"<<endl;
//         return -1;
//     }
//     int data = stack[top];
//     top--;
//     return data;
// }
// int peek() {
//     if(isEmpty()) {
//         cout<<"Stack is empty"<<endl;
//         return -1;
//     }
//     return stack[top];
// }
// void display() {
//     if(isEmpty()) {
//         cout<<"Stack is empty"<<endl;
//         return;
//     }
//     for(int i=top; i>=0; i--) {
//         cout<<stack[i]<<" ";
//     }
//     cout<<endl;
// }
// void traverse() {
//     if(isEmpty()) {
//         cout<<"Stack is empty"<<endl;
//         return;
//     }
//     for(int i=0; i<=top; i++) {
//         cout<<stack[i]<<" ";
//     }
//     cout<<endl;
// }
// int main() {
//     push(1);
//     push(2);
//     push(3);
//     push(4);
//     push(5);
//     display();
//     cout<<peek()<<endl;
//     pop();
//     display();
//     traverse();
//     return 0;
// }
// switch (choice) {
//         case 1:
//             cout << "Enter data to push: ";
//             cin >> data;
//             push(data);
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             cout << "Top element: " << peek() << endl;
//             break;
//         case 4:
//             display();
//             break;
//         case 5:
//             traverse();
//             break;
//         case 6:
//             cout << "Exiting..." << endl;
//             exit(0);
//         default:
//             cout << "Invalid choice!" << endl;
//     }
// }