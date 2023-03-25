#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{10,3,4,8,23};
    v.pop_back();
    v.front()=100;
    cout<<v.front()<<" ";
    cout<<v.back()<<" ";
    cout<<endl;
    v.insert(v.begin()+2,200);
    v.insert(v.begin(),2,300);
    for(int &x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    v.erase(v.begin());
     for(int &x:v){
        cout<<x<<" ";
    }
    cout<<endl<<v.capacity()<<" ";
return 0;
}
/*
insert,erase- O(n)
other- O(1)
avg.for inserting =O(1)
pass by reference should be there for changing the vector the container
*/
