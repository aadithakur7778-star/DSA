#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
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
     for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(a,n);
    printArray(a,n);

}