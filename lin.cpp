#include<bits/stdc++.h>
using namespace std;
vector<int> findRepeatingAndMissingNumbers(vector<int> nums)
{
    // Write your code here.
    sort(nums.begin(), nums.end());
    vector<int> res;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==nums[i-1]){
            res.push_back(nums[i]);
            break;
        }
    }
    for(int i=1;i<=n;i++){
        if(nums[i-1]!=(i)){
            res.push_back(i);
            break;
        }
    }
    return res;
}
int main(){
    vector<int> m={1,2,3,4,4,5};
    vector<int> l=findRepeatingAndMissingNumbers( m);
    int n= l.size();
    for(int i=0;i<n;i++){
        cout<<l.back();
        l.pop_back();
    }
    return 0;
}