#include<iostream>
using namespace std;
//using lumoto partition
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
void quick_lumoto(int arr[],int l,int h){

     if (l<h){
        int p = lpartition(arr,  l, h);
        quick_lumoto(arr,l,p-1);
        quick_lumoto(arr,p+1,h);
     }
}
int h_partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}
void q_hoarse(int arr[], int l, int h){
    if(l<h){
        int p= h_partition(arr,l,h);
        q_hoarse(arr,l,p);
        q_hoarse(arr,p+1,h);
    }
}
int main(){
int a[10]= {10,45,5,7,54,11,34,78,90,12};
int n = sizeof(a)/sizeof(a[0]);
    // quick_lumoto(a,0,n-1);
    q_hoarse(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
return 0;
}