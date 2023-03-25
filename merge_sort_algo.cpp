#include<iostream>
using namespace std;
void merge_func(int arr[], int low, int high, int mid){
    int n1= mid-low+1;
    int n2 = high-mid;
    int left[n1], right[n2];
    for(int i=0; i<n1;i++){
        left[i]= arr[i+low];
    }
    for(int i=0; i<n2;i++){
        right[i]= arr[i+mid+1];
    }
     int i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];    
}
void mergeSort(int arr[], int l, int r){
    if (r>l){
        int m = l + (r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge_func(arr,l,r,m);
    }
}
int main(){
    int a[10]= {10,45,5,7,54,11,34,78,903,121};
    mergeSort(a,0,9);
    for(int x : a){
        cout<<x<<" ";
    }
return 0;
}

/*
 ANALYSIS
 1. At every level we are going to do theta(n) work 
    thus T(n)= theta(logn) + theta(n)
 2. Space = theta(n)
*/