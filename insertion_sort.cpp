#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n){
    int comp =0;
    for(int i=0;i<n;i++){
       int key = arr[i];
       int j=i-1;
       while(j>=0 && arr[j]>key){
        comp++;
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=key;
    }
    cout<<"comparions are: "<<comp<<endl;
}
int main(){
    int arr[6]={2,7,3,8,3,1};
        insertion_sort(arr,6);
        for(int i=0;i<6;i++){
            cout<<arr[i]<<endl;
        }
        int arr1[6]={2,2,3,8,9,11};
        insertion_sort(arr1,6);
        for(int i=0;i<6;i++){
            cout<<arr1[i]<<endl;
        }
        int arr2[7]={4441,2222,313,81,19,11,2};
        insertion_sort(arr2,7);
        for(int i=0;i<7;i++){
            cout<<arr2[i]<<endl;
        }
return 0;
}