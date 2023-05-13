#include<iostream>
#include<unordered_set>
using namespace std;
void print_dis(int arr[], int n){
    unordered_set<int> s;
    // for(int i=0;i<n;i++){
    //     s.insert(arr[i]);
    // }
//     for(int x:s){
//         cout<<x<<" ";
//     }

//to print in the order of insertion
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end()){
            cout<<arr[i]<<" ";
            s.insert(arr[i]);
        }
    }
 }
 void print_repeated(int arr[], int n){
    unordered_set<int> s;
    
//to print in the order of insertion
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end()){ 
            s.insert(arr[i]);
        }
        else{
             cout<<arr[i]<<" ";
        }
    }
 }
int max_dist(int arr[], int n, int k){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        int d=s.size();
        if(d>=n/k){
            return (n/k);
        }
        else{
            return d;
        }
    }
   
int main(){
     int arr[]={1,34,67,34,78,345,12,12,23,23,1};
     print_dis(arr,11);
     cout<<endl;
     print_repeated(arr,11);
     cout<<endl;
     cout<<max_dist(arr,11,2);
return 0;
}