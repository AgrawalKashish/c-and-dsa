#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//NAIVE SOLUTION // o(n^2)
bool isSubArray(int arr[], int n){
    for(int i=0;i<n;i++){
        int curr_sum =0;
        for(int j=i;j<n;j++){
            curr_sum = curr_sum + arr[j];
            if(curr_sum==0){
                return true;
            }
        }
    }
    return false;
}
// optimal solution o(n)
bool is_0_subArray(int arr[], int n){
    unordered_set<int> h;
    int pre_sum =0;
    for(int i=0;i<n;i++){
        pre_sum += arr[i];
        if(h.find(pre_sum) != h.end()){
            return true;
        }
        if(pre_sum==0){
            return true;
        }
        h.insert(pre_sum);
    }
    return false;
}
int main(){
         int arr[5]={5,-7,-2,1,2};
         int arr1[5]={5,-6,-2,1,2};
         cout<<isSubArray(arr,5)<<endl;
         cout<<isSubArray(arr1,5)<<endl;
         cout<<is_0_subArray(arr,5)<<endl;
         cout<<is_0_subArray(arr1,5)<<endl;
return 0;
}