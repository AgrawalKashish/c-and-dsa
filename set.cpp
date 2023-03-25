#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int, greater<int>> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(30);
     s.insert(5);
    for(auto x: s){
        cout<<x<<" ";
    }
    cout<<endl;
    // auto it = s.lower_bound(5);
    auto it = s.upper_bound(30);
    if(it!=s.end()){
        cout<<(*it)<<" ";
    }
    else{
        cout<<"Given element is greater than the largest. ";
    }
    //set ignores duplicate value
return 0;
}