#include<iostream>
#include<unordered_map>
using namespace std;

//hashing
int main(){
    unordered_map<string, int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m.insert({"enum", 23});
    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl; //can be in any order
    }
return 0;
}