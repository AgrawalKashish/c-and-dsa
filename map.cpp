#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, int>m;
    m.insert({10,20});
    m[5]=100;
    m.insert({3,30});
    cout<<m.size()<<endl;
    cout<<m[20]<<endl;//this value get inserted
    for(auto &x:m){
        cout<<x.first<<" "<<x.second<<endl;;
    }
    cout<<m.size();
    m.at(11)=300;// out of range
     for(auto &x:m){
        cout<<x.first<<" "<<x.second<<endl;;
    }
    cout<<endl<<m.size();
return 0;
}