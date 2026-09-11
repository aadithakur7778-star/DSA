#include<bits/stdc++.h>
using namespace std;

class Hero{
     //properties
     public:
     int health;
     char level;
     private: 
     void print(){
        cout << level << endl;
     }
    
};
int main()
{
    // object formation
    Hero Ramesh;
    Ramesh.health = 70;
    Ramesh.level= 'A';
    cout<<"health is :" <<Ramesh.health<<endl;
    cout<<"level is  :" <<Ramesh.level <<endl;  

}
