#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//naive solution //O(n^2)
bool epoint(int arr[], int n){
    for(int i=0;i<n;i++){
        int ls=0, rs=0;
        for(int j=0;j<i;j++){
            ls +=arr[j];
        }
        for(int j=i+1;j<n;j++){
            rs +=arr[j];
        }
        if(ls==rs){
            return true;
        }
    }
    return false;
}
/*
1. Compute prefix sum
2. Compute suffix sum
3. For every element(except corner ones)
   check if ps[i-1] is same as ss[i+1]
*/
// effecient solution
bool eq_point(int arr[], int n){
    int rs=0;
    for(int i=0;i<n;i++){
        rs +=arr[i];
    }
    int ls=0;
    for(int i=0;i<n;i++){
        rs -=arr[i];
        if(ls==rs){
            return true;
        }
        ls +=arr[i];
    }
    return false;
}
int main(){
 int arr[5]={5,0,-2,3,2};
 cout<<eq_point(arr,5);
  cout<<epoint(arr,5);
return 0;
}