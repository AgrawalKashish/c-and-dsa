#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v ={5,3,56,10};
    auto it = find(v.begin(),v.end(),10);
    if(it==v.end()){
        cout<<"not found";
    }
    else{
        cout<<"found at : "<<(it-v.begin());
    }
return 0;
}