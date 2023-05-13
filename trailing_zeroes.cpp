#include<iostream>
using namespace std;
int trailing_zeroes(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res = res+ (n/i);
    }
    return res;
}
int main(){
     int n=100;
     cout<<trailing_zeroes(n);
return 0;
}