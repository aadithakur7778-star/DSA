#include<bits/stdc++.h>
using namespace std;

class Queue{
    int* arr;
    int size;
    int rear;
    int front;
public:
Queue(){
    size= 100001;
    arr= new int[size];
    rear=0;
    front=0;
}
// ------functions of queue-----

bool isEmpty(){
    if(front==rear) return true;

    else return false;
}
void enqueue(int data){
    if(rear==size){
        cout<<"Queue is Full"<<endl;
    }
    else{
        arr[rear]=data;
        rear++;
    }
}
    int dequeue(){
        if(rear==front){
            return -1;
            
        }
        else{
            int ans =arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
            return ans;
        }
    }
    int getFront(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

};

int main(){
    Queue q;
    
    // Enqueue elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    
    cout << "Queue elements after enqueue:" << endl;
    cout << "Front: " << q.getFront() << endl;
    
    // Dequeue elements
    cout << "\nDequeue operations:" << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    
    // Check if queue is empty
    cout << "\nIs Queue Empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    
    // Enqueue more elements
    q.enqueue(60);
    q.enqueue(70);
    
    cout << "\nFront element: " << q.getFront() << endl;
    
    // Dequeue remaining
    cout << "\nDequeue remaining:" << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    
    cout << "\nIs Queue Empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}
   


