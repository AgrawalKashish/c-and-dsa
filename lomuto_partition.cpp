#include<iostream>
using namespace std;
//NOT STABLE
int lpartition(int arr[], int l,int h){
    int pivot = arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1]=arr[h];
    arr[h]=temp;
    return i+1;
}
int main(){
    int a[10]= {10,45,5,7,54,11,34,78,903,12};
    cout<<lpartition(a,0,9);
return 0;
}