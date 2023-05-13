#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string maxValue(string n, int x) {
        int sz=n.size(),positive=1;
        if(n[0]=='-') positive=0;
        
        if(positive){
            for(int i=0;i<sz;++i){
                if(n[i]-'0'<x) {
                    n.insert(n.begin()+i, x+'0');
                    return n;
                }
            }
        }
        else{
            for(int i=1;i<sz;++i){
                if(n[i]-'0'>x) {
                    n.insert(n.begin()+i, x+'0');
                    return n;
                }
            }
        }
        n.insert(n.begin()+sz, x+'0');
        return n;
}
int main(){
   int t;
   cin>>t;
   while(t>0){
      int n,x;
      cin>>n>>x;
      string s;
        cin>>s[n];
     string m=maxValue( s, x);
      cout<<m;
    t--;
   }
return 0;
}