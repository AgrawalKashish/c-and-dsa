#include<bits/stdc++.h>
using namespace std;
//naive solution
int max_length(int arr[], int n, int sum){
    int res=0;
    for(int i=0;i<n;i++){
        int curr_sum =0;
        for(int j=i;j<n;j++){
            curr_sum +=arr[j];
            if(curr_sum == sum){
                res = max(res, j-i+1);
            }
        }
    }
    return res;
}
//optimal solution
int max_len(int arr[], int n, int sum){
    unordered_map<int, int> m;
    int pre_sum =0,res=0;
    for(int i=0; i<n;i++){
        pre_sum += arr[i];
        if(pre_sum ==sum){
            res == i+1;
        }
        if(m.find(pre_sum)== m.end()){
            m.insert({pre_sum,i});
        }
        if(m.find(pre_sum -sum)!= m.end()){
            res = max(res, i-m[pre_sum-sum]);
        }
    }
    return res;
}
// sub array with equal no of zeroes and ones
 //NAIVE SOLUTION
int longest_sub(int arr[], int n){
    int res =0;
    for(int i=0;i<n;i++){
        int c0=0,c1=0;
        for(int j=i;j<n;j++){
            if(arr[j]==0){
                c0++;
            }
            else{c1++;}
            if(c0==c1){
                res = max(res, c0+c1);
            }
        }
    }
 return res;
}
//optimal solution
int longSub(int arr[], int n){
    for(int i = 0; i < n; i++){
     arr[i] = (arr[i] == 0) ? -1 : 1;
     }
    unordered_map<int, int> ump;
    int sum = 0, maxLen = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum == 0){
         maxLen = i+1;}
         
        if(ump.find(sum+n) != ump.end())
        {
            if(maxLen < i - ump[sum+n])
             maxLen = i - ump[sum+n];
             
        }
        else {ump[sum + n] = i;}
    }
    
return maxLen;
}
    
int main(void){
     int arr[]={5,3,2,4};
     cout<<max_length(arr,4,5)<<endl;
     cout<<max_len(arr,4,5)<<endl;
     int arr1[]={1,1,1,0,1,1,0,1,0,0,1,0,1,1,1,0,0,0};
     cout<<longest_sub(arr1,18)<<endl;
     cout<<longSub(arr1,18)<<endl;
    return 0;
}