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
int main(){
     int a[10]= {1,4,5,7,11,34,56,78,90,121};
     merge_func(a,0,9,5);
     for(int x: a)
	    cout<<x<<" ";
return 0;
}