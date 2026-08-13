// code to check whether no. is divisible by 3 or 5 or both and the count of total no. under that condition
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v={3,6,15,17,18,21,25,55,100,200,550};
    int count=0;
   vector<int> divisible_3;
   vector<int> divisible_5;
   for(auto x: v){
    if(x%3==0){
    count++;
    divisible_3.push_back(x);
    
    }
    if(x%5==0){
    count++;
    divisible_5.push_back(x);
   // cout<<"the no. is divisible by 5"<<x<<" ";
    }


   }
   cout<<"the numbers divible by 3 = ";
   for( auto i : divisible_3){
    cout<<i<<" ";
   }
   cout<<endl;
   cout<<"the numbers divible by 5 = ";
   for( auto i : divisible_5){
    cout<<i<<" ";
   }
   cout<<endl;
   cout<<"total no. which are divisible by 3 or 5 are = "<<count;
}