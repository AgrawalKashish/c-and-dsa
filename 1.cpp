#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,arr[n];
	    cin>>n;
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	   int m= *max_element(arr, arr + n);
	   int arr1[m+1];
	   for(int j=0;j<n;j++){
	      arr1[arr[j]]++;
	   }
	   int y= *max_element(arr1, arr1 + m);
	    int count=0;
	   for(int j=0;j<m;j++){
	      
	       if(y==arr1[j]){
	           count++;
	       }
	   }
	   if(count>=1){
	           cout<<"no"<<endl;
	       }
	   else{
	       cout<<"yes"<<endl;
	   }
	}
	return 0;
}
