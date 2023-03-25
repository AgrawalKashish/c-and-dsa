#include<iostream>
#include<set>
using namespace std;
int main(){
   multiset<int, greater<int>> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    ms.insert(5);
    for(auto x: ms){
        cout<<x<<" ";
    }
    cout<<endl;
    // auto it = s.lower_bound(5);
    auto it = ms.upper_bound(30);
    if(it!=ms.end()){
        cout<<(*it)<<" ";
        it= ms.lower_bound(11);
    }
    else{
        cout<<"Given element is greater than the largest. ";
    }
    cout<<endl<<(*it);
    // auto it1=ms.equal_range(20);
    // cout<<(*it1).first(<<" "<<(*it1).second();
      //set ignores duplicate value
return 0;
}