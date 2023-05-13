#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {10,23,34,56,78,345};
    auto it=lower_bound(v.begin(), v.end(), 20); //O(logn)
    cout<<(it-v.begin())<<endl;
return 0;
}