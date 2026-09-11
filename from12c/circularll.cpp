#include <bits/stdc++.h>
using namespace std;


	// your code goes here
	class node{
	    public:
	    int data ;
	    node* next;
	    node(int x){
	        data=x;
	        next =NULL;
	    }
	    
	};
	 class circularList{
	     node* head;
	     node* tail;
	     public:
	     circularList(){
	         head =tail=NULL;
	     }
	     void InsertAtHead(int x){
	         node* newnode=new node(x);
	         if(head==NULL){
	            head=tail=newnode;
	            tail->next= head;
	         }
	         else{ newnode->next =head;
	         head=newnode;
	         tail->next=head;
	             
	         }
	     }
	         void print(){
	             if(head==NULL)
	             return;
	             cout<<head->data<<"<=>";
	             node* temp=head->next;
	             while(temp!=head){
	                 cout <<temp->data<<" <=> ";
	                temp=temp->next;
	             }
	             
	          
	      cout<<temp->data<<endl;   
	         }
	         
	         void insertAtTail(int x){
	             
	         }
	 };
int main() {
    circularList cll;
    cll.InsertAtHead(8);
    cll.InsertAtHead(4);
    cll.InsertAtHead(3);
    cll.print();
    
    return 0;
}