#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
     int arr[] = {2,4,6,3,4,656,900,345};
     sort(arr, arr+5);
     sort(arr,arr+5,greater<int>()); //sort in descending order
     for(int i =0; i<8;i++){
        cout<<arr[i]<<endl;
     }
return 0;
}

/*
Function Object(FUNCTOR):
A function wrapped in a class so that it become available like an object
*/