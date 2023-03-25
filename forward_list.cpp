#include<iostream>
#include<forward_list>
using namespace std;
int main(){
 forward_list<int>l,l2;
 l.assign({10,20,30,40});
 l2.assign(l.begin(),l.end());
 l.remove(10);
 for(auto it=l.begin(); it!=l.end();it++){
    cout<<(*it)<<" ";
 }
 cout<<endl;
 auto it=l2.emplace_after(l2.begin(),300);
 it=l2.emplace_after(it,3);
 for(auto it=l2.begin(); it!=l2.end();it++){
    cout<<(*it)<<" ";
 }
 cout<<endl;
 l.merge(l2);
 for(auto it=l.begin(); it!=l.end();it++){
    cout<<(*it)<<" ";
 }
 cout<<endl;
 //empty now
  for(auto it=l2.begin(); it!=l2.end();it++){
    cout<<(*it)<<" ";
 }
return 0;
}