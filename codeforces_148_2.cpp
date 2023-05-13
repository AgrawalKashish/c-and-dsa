#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count =1;
        int flag=0;
        for(int i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                if(flag!=1){
                    count++;
                }
                flag=1;
            }
            else if(arr[i]<arr[i+1]){
                if(flag!=-1){
                    count++;
                }
                flag=-1;
            }
        }
        cout<<count<<endl;
        t--;
    }
return 0;
}