#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data=x;
        next= NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head =tail=NULL;
    }
    void pushFront(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head= tail = newNode;
            return;
        }
        else{
            newNode ->next = head;
            head=newNode;
        }
    }
    void pushback(int val){
        Node* newNode =new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail ->next =newNode;
            tail = newNode;
        }
    }
    void popfront(){
        if(head==NULL){
            cout<<"LL is empty \n";
            return;
        }
        else{
            Node* temp=head;
            head=head->next;
            temp ->next=NULL;
            delete temp;
        }
    }
    void popback(){
        if(head==NULL){
            cout<<"LL is empty \n";
            return;
        }
        Node* temp =head;
        while(temp ->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    int searchPosition(int key){
        Node* temp=head;
        int indx=0;
        while(temp!=NULL){
            if(temp->data ==key){
                return indx;
            }
            temp=temp->next; 
            indx++; 
        }
        return -1;
    } 
    
    void printLL(){
        Node* curr=head;
        while(curr!=NULL){
            cout<<curr ->data<<" ";
            curr= curr ->next;
        }
    }
    
};

int main() {
	// your code goes here
	List ll;
	ll.pushFront(1);
	ll.pushFront(2);
	ll.pushFront(3);
	ll.pushback(4);
	ll.popfront();
	ll.popback();
	ll.printLL();

}
