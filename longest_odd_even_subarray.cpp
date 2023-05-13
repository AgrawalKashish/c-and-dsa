#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void array__(int arr[],int n){
    int curr=1;
    int res=arr[0];
    for(int i=1;i<n;i++){
        if(res%2==0){
            res= arr[i];
            if(res%2!=0){
                curr++;
            }
            else{
                curr=1;
            }
        }
        else{
            res= arr[i];
            if(res%2==0){
                curr++;
            }
            else{
                curr=1;
            }
        }
    }
    cout<<curr<<endl;
}
int main(){
  int arr[]={10,12,14,7,8};
  array__(arr,5);
   int arr1[]={7,10,13,14};
  array__(arr1,4);
   int arr2[]={10,12,8,4};
  array__(arr2,4);
return 0;
}