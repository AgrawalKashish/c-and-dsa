#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector v={10,34,45,6677,23};
    vector<int>:: iterator i=v.begin();
     //auto i is generally used
    advance(i,3);
    cout<<(*i)<<" ";
    i=next(i,1);
    cout<<(*i)<<" ";
    i=v.end();
    i--;
    i--;
    cout<<(*i)<<" ";
    i=prev(i);
    cout<<(*i)<<" ";
    
return 0;
}