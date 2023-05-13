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
        int m=arr[0];
        for(int i=1;i<n;i++){
            m=m^arr[i];
        }
        if(n%2!=0){
            cout<<m<<endl;
        }
        else{
            if(m==0){
                cout<<"0"<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
        t--;
    }
return 0;
}