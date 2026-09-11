 #include<bits/stdc++.h>
using namespace std;
void selectionSorting(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[minIndex]>a[j])
            {
            minIndex=j;
            }
        }
        swap(a[minIndex],a[i]);
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
selectionSorting(a,n);
printArray(a,n);
}