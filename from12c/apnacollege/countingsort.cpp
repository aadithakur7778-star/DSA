#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a[]={4,2,3,1,2,1};
	int n =sizeof(a)/sizeof(a[0]);
	int max=a[0];
	for(int i=0;i<n;i++){ //max mil gaya
	    if(a[i]>max){
	        max =a[i];
	    }
	}
	int count[max+1]={0};//initialize array with size of maxelement+1 
	
	    for(int i=0;i<n;i++){
	        count[a[i]]++;
	    }
	    
	    for(int i=0;i<=max;i++){
	        while(count[i]>0){
	            cout<<i<<" ";
	            count[i]--;
	        }
	    }

}