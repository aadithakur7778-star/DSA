#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int n,int t){
    int strt=0,end = n-1,mid = (strt+end)/2;
    while(strt<=end){
        if (a[mid]==t){
        return mid;
    }
    if(t>a[mid]) {
    strt=mid+1;
    }
    else{
        end = mid-1;
    }
    mid= (strt+end)/2;
}
return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t;
    cin>>t;
    cout<<binarySearch(a,n,t);

}
