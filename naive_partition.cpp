#include<iostream>
using namespace std;
//STABLE
void partition_naive(int arr[], int l, int h, int p){
    int temp[h-l+1], index=0;
    for(int i=l;i<=h;i++){
        if(arr[i]<=arr[p]){
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++){
        if(arr[i]>arr[p]){
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++){
        arr[i]=temp[i-l];
    }
}
int main(){
    int a[10]= {10,45,5,7,54,11,34,78,903,121};
    partition_naive(a,0,9,5);
    for(int x:a){
        cout<<x<<" ";
    }
return 0;
}