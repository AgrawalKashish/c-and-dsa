#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s; //it is hashing //we can get output in any order
    s.insert(34);
    s.insert(12);
    s.insert(23);
    for(auto x: s){
        cout<<x<<" ";
    }
    if(s.find(23)==s.end()){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found";
    }
    s.erase(s.begin(), s.end());
    for(auto x: s){
        cout<<x<<" ";
    }
return 0;
}