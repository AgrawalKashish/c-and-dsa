#include<iostream>
#include<deque>
using namespace std;
//naive sol
void print_max(int arr[],int n,int k){
    for(int i=0;i<n-k+1;i++){
        int mx=arr[i];
        for(int j=i+1;j<i+k;j++){
            mx=max(arr[j],mx);
        }
         cout<<mx<<" ";
    }
   
}
//better sol
void print_(int arr[],int n,int k){
    
}
int main(){
    int a[]={2,3,4,2};
        print_max(a,4,2);
return 0;
}