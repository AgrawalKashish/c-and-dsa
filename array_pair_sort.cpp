#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void SortChar(int a[], char b[], int n){
    pair<int,char> pa[n];
    for(int i=0;i<n;i++){
        pa[i]={a[i],b[i]};
    }
    sort(pa,pa+n);
    for(int i=0;i<n;i++){
        cout<<pa[i].second<<" ";
    }
}
int main(){
      int a[]={4,2,6,8};
      char b[]={'e','r','d','s'};
      SortChar(a,b,4);
return 0;
}