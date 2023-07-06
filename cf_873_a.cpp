#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int sum =0;
        for(int i=0;i<n;i++){
            sum = sum +1;
            cout<<sum<<" ";
        }
        t--;
    }
    return 0;
}