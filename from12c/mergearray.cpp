#include<bits/stdc++.h>
using namespace std;
void mergeArrays(int a1[],int a2[],int n1,int n2,int a3[])
{
    int i=0;
   while(i<n1){
       a3[i]=a1[i];
       i++;
   }
   int j=0;
   while(j<n2){
       a3[n1+j]=a2[j];
       j++;
   }
   
    
}


int main()
{
    int a1[]={1,3,5,7};
    int n1 = sizeof(a1)/sizeof(a1[0]);
    int a2[]={2,4,6,8};
    int n2 = sizeof(a2)/sizeof(a2[0]);
    int a3[n1+n2];
    mergeArrays(a1,a2,n1,n2,a3);
     
    cout<<"Array after merging" <<endl;
    for(int i=0;i<n1+n2;i++){
   cout<<a3[i]<<" ";
   }
    
}