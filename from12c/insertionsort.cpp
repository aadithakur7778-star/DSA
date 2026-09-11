#include<bits/stdc++.h>
using namespace std;
void insertionsort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j--){
            if(a[j]>temp)
            a[j+1]=a[j];
        
        else{
            break;
        }
        
    }  
    a[j+1]=temp; 
}
}
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    { 
        cin>>a[i];
    }
    insertionsort(a,n);
    printArray(a,n);
}