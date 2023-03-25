#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    int swap =0,comp=0;
    bool swapped;
    for(int i=0;i<n;i++){
      swapped = false;
      
        for(int j=0;j<n-i-1;j++){
            comp++;
            if(arr[j]>arr[j+1]){
                swap++;
                int temp;
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    cout<<"No of swaps are: "<<swap<<" "<<comp<<endl;
}
int main(){
        int arr[6]={2,7,3,8,3,1};
        bubble_sort(arr,6);
        for(int i=0;i<6;i++){
            cout<<arr[i]<<endl;
        }
        int arr1[6]={2,2,3,8,9,11};
        bubble_sort(arr1,6);
        for(int i=0;i<6;i++){
            cout<<arr1[i]<<endl;
        }
        int arr2[6]={44412,2222,313,81,19,11};
        bubble_sort(arr2,6);
        for(int i=0;i<6;i++){
            cout<<arr2[i]<<endl;
        }
return 0;
}