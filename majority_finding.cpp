#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int majority_finding(int arr[], int n){
    sort(arr, arr+n);
    int m = arr[n/2];
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            count++;
        }
    }
    if(count > (n/2)){
        return m;
    }
    return -1;
}
int main(){
    int arr[]= {6,7,6,4,3,6,6,6,8,6};
    cout<<majority_finding(arr,10)<<endl;
    int arr1[]= {6,7,6,4,3,6,4,6,8,6};
    cout<<majority_finding(arr1,10)<<endl;
return 0;
}