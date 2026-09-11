#include <bits/stdc++.h>
using namespace std;
 class Node {
     public :
     int data;
     Node* next;
     Node* prev;
     
     Node(int x){
         data =x;
         next=prev=NULL;
         
     }
 };
 class DoublyList{
     Node* head;
     Node* tail;
     public:
     DoublyList(){
         head=tail=NULL;
     }
     void push_front(int x){
         Node* newNode=new Node(x);
         if(head==NULL){
             head=tail=newNode;
         }
         else{
             newNode->next=head;
             head->prev=newNode;
             head=newNode;
         }
     }
     void push_back(int x){
         Node* newNode=new Node(x);
         if(head==NULL){
             head=tail=newNode;
         }
         else{
             tail->next=newNode;
             newNode->prev=tail;
             tail=newNode;
         }
     }
      void pop_front(){
          if(head==NULL){
              cout<<"DoublyList is empty \n";
              return;
          }
          Node* temp=head;
          head = head->next;
          if(head!=NULL){
              head->prev=NULL;
          }
              temp->next=NULL;
              delete temp;
          
          
      }
      void pop_back(){
          if(head==NULL){
              cout<<"DoublyList is empty \n";
          }
          Node* temp =tail;
           tail =tail->prev;
           if(tail!=NULL){
               tail->next=NULL;
           }
               temp->prev=NULL;
               delete temp;
           
      }
     void print(){
         Node* temp=head;
         while(temp!=NULL){
             cout<<temp->data<<" <=> ";
             temp=temp->next;
         }
         cout<<"NULL\n"<<endl;
     }
 }; 

int main() {
    DoublyList dll;
    dll.push_front(1);
    dll.push_front(3);
    dll.push_front(5);
    dll.print();
    dll.push_back(4);
    dll.print();
    dll.pop_front();
    dll.print();
    dll.pop_back();
    dll.print();
    
}