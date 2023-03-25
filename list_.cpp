#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    for(auto x: l){
        cout<<x<<" ";
    }
    cout<<endl;
    l.pop_front();
    l.pop_back();
    for(auto it=l.begin();it!=l.end();it++){
        cout<<(*it)<<" ";
    }
    auto it=l.begin();
    l.insert(it,2,8);
    l.insert(it,15);
     for(auto it=l.begin();it!=l.end();it++){
        cout<<(*it)<<" ";
    }
    l.unique(); //it will remove the other repeated elements
    return 0;
}