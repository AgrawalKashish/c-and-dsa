#include<iostream>
#include<list>
using namespace std;
int get_(int n,int k){
    list<int> l;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        l.push_back(x);
    }
    auto it=l.begin();
    while(l.size()>1){
        for(int count=1;count<k;count++){
            it++;
            if(it==l.end())
                it=l.begin();
        }
        it=l.erase(it);
        if(it==l.end()){
            it=l.begin();
        }
    }
    return *l.begin();
}
int main(){
    cout<<get_(11,3);
return 0;
}