#include<iostream>
using namespace std;
void selection_sort(int arr[], int n){
    int comp =0;
    for(int i=0;i<n-1;i++){
        int min_ind=i;
        for(int j=i+1;j<n;j++){
            comp++;
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        int swap;
        swap = arr[min_ind];
        arr[min_ind]=arr[i];
        arr[i]=swap;
    }
    cout<<"comparions are: "<<comp<<endl;
}
int main(){
    int arr[6]={2,7,3,8,3,1};
        selection_sort(arr,6);
        for(int i=0;i<6;i++){
            cout<<arr[i]<<endl;
        }
        int arr1[6]={2,2,3,8,9,11};
        selection_sort(arr1,6);
        for(int i=0;i<6;i++){
            cout<<arr1[i]<<endl;
        }
        int arr2[7]={44412,2222,313,81,19,11,2};
        selection_sort(arr2,7);
        for(int i=0;i<7;i++){
            cout<<arr2[i]<<endl;
        }
return 0;
}