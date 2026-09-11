#include<bits/stdc++.h>
using namespace std;
class CircularQueue{
    int* arr;
    int size;
    int rear;
    int front;
public:
CircularQueue(){
    size= 100001;
    arr= new int[size];
    rear=front=-1;
}
bool enqueue(int data){
    if((front==0 && rear==size-1) || (rear==(front-1)%size)){
        cout<<"Circular Queue is Full"<<endl;
        return false;
    }
    else if(front==- 1){
        front=0;
        rear=0;
        arr[rear]=data;
    }
    else if(rear==size-1 && front!=0){
        rear=0;
        arr[rear]=data;
    }
    else{
        rear++;
        arr[rear]=data;
    }
    return true;
}

int dequeue(){
    if(front==-1){
        cout<<"Circular Queue is Empty"<<endl;
        return -1;
    }
    int ans = arr[front];
    arr[front]=-1;
    
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else if(front==size-1){
        front=0;
    }
    else{
        front++;
    }
    return ans;
}

int getFront(){
    if(front==-1){
        cout<<"Circular Queue is Empty"<<endl;
        return -1;
    }
    return arr[front];
}

bool isEmpty(){
    return front==-1;
}

};

int main(){
    CircularQueue cq;
    
    cout << "Enqueue elements:" << endl;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    
    cout << "Front element: " << cq.getFront() << endl;
    
    cout << "\nDequeue operations:" << endl;
    cout << cq.dequeue() << endl;
    cout << cq.dequeue() << endl;
    
    cout << "\nEnqueue more elements after dequeue:" << endl;
    cq.enqueue(60);
    cq.enqueue(70);
    
    cout << "Front element: " << cq.getFront() << endl;
    
    cout << "\nIs Queue Empty? " << (cq.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}