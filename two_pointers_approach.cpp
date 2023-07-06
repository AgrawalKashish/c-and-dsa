#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool idpair(int arr[], int n,int x){
    int i=0,j=n-1;
     while(i<j){
        if(arr[i]+arr[j]==x){
            return true;
        }
        else if(arr[i]+arr[j]>x){
           j=j-1;
        }
        else{
            i++;
        }
    }
    return false;
}
int main(){
    int arr[7]={2,4,10,11,12,20,30};
    int x=23;
    cout<<idpair(arr,7,x);
return 0;
}