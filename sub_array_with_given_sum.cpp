#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool is_sum_subArray(int arr[], int n,int sum){
    unordered_set<int> h;
    int pre_sum =0;
    for(int i=0;i<n;i++){
        pre_sum += arr[i];
        if(h.find(pre_sum-sum) != h.end()){
            return true;
        }
        if(pre_sum==sum){
            return true;
        }
        h.insert(pre_sum);
    }
    return false;
}
int main(){
         int arr[5]={5,-7,-2,1,2};
         int arr1[5]={5,-6,-2,1,2};
         cout<<is_sum_subArray(arr,5,-4)<<endl;
         cout<<is_sum_subArray(arr1,5,12)<<endl;
return 0;
}