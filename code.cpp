#include <cmath>
#include <cstdio>
#include <vector>
#include<bits/stdc++.h>


using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin>>n;
    vector<int> v;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int pos;
    cin>>pos;
    pos= pos-1;
    v.erase(v.begin()+pos);
    int a,b;
    cin>>a>>b;
    b=b-1;
    v.erase(v.begin()+a, v.end()+b);
    cout<<v.size();
     for(int i=1;i<=v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
    
    
}
