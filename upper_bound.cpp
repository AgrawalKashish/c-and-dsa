#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
vector<int> v = {10,23,34,56,88,345};
vector<int> v0= {10,34,23,88,345,56};
    auto it=upper_bound(v.begin(), v.end(), 3); //O(logn)
    cout<<(*it)<<endl;
    //advance fun is alternative
    if(is_permutation(v.begin(), v.end(), v0.begin())){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    //for pangram we can use it but it takes O(n^2) time.
return 0;
}