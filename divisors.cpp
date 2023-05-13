#include<iostream>
#include<set>
using namespace std;
void divisors(int n){
    set<int> s;
    if(n==1){
        cout<<"1"<<" ";
    }
    for(int i=2;i<=n;i++){
        if((n%i)==0){
            s.insert(i);
            s.insert(n/i);
        }
    }
    for(auto x:s){
        cout<<x<<" ";
    }
}
int main(){
    divisors(12);
return 0;
}