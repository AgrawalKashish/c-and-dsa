#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// merge two arrays
//NAIVE SOLUTION
void merge_NAIVE(int a[], int b[], int m, int n){
    int c[m+n];
    for(int i=0; i<m;i++){
        c[i]=a[i];
    }
    for(int i=0; i<n;i++){
        c[i+m]=b[i];
    }
    sort(c,c+m+n);
    for(int i=0;i<(m+n);i++){
        cout<<c[i]<<" ";
    }
}
//OPTIMAL SOLUTION
void merge_Optimal(int a[], int b[], int m, int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<m){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<b[i]<<" ";
        j++;
    }
}
int main(){
    int arr[6]={1,4,9,23,132};
    int arr1[5]={9,45,65,121};
    merge_NAIVE(arr,arr1,5,4);
    cout<<endl;
    merge_Optimal(arr,arr1,5,4);
return 0;
}
/*
Divide and conquer Algorithm
Stable Algorithm
theta(nlogn) time and O(n) space
well suited for linked lists, works in O(1)
used in external sorting
in general for arrays, quicksort outperforms
*/