
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
       int n,k;
   cin>>n>>k;
   vector<int>v(n);
   int sum=0;
   for(int i=0;i<n;i++){
     cin>>v[i];
     sum+=v[i];
   }
   int ma=0;
   sort(v.begin(),v.end()); 
   vector<int>p(n+1,0),s(n+1,0);
   p[0]=0;
   for(int i=1;i<=n;i++){ 
     p[i]=p[i-1]+v[i-1];
   }
   reverse(v.begin(),v.end());
   s[0]=0;
   for(int i=1;i<=n;i++){
   s[i]=s[i-1]+v[i-1]; 
   }
   for(int i=0;i<=k;i++){
    int left=p[2*i]; 
    int right= s[k-i];
    ma=max(ma,sum-(left+right));
   }
   cout<<ma<<endl;
        t--;
    }
return 0;
}