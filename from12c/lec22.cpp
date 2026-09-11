#include <bits/stdc++.h>
using namespace std;
// for the length of character array
  int getlen(char value[]){
        int count=0;
        for(int i=0;value[i]!='\0';i++){
        count ++;
        }
        return count;
    }
    //for the reverse of the array
     void arrayreverse(char name[]){
        int n=getlen(name);
        int s=0,e=n-1;
        while(s<e){
            swap(name[s++],name[e--]);
        }
        //to check the palindrome or not
bool checkpalindrome(char a[],int n){
    int s=0,e=n-1;
    while(s<=e){
        if(a[s]!=a[e])
        return 0;
    else
    s++;e--;
    }
    return 1;
}
int main(){
     char name[20];
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Your name is ="<<name<<endl;
        cout<<"length of your name is ="<<getlen(name)<<endl;
       arrayreverse(name);
        cout<<"reverse of your input is= "<<name ;

        cout<<"palindrome or not:" <<checkpalindrome(name,getlen(name))<<endl;
        return 0;

}
