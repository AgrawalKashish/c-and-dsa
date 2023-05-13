#include<iostream>
using namespace std;
int gcd(int a,int b){
    int p=a;
    int q=b;
    while(p!=q){
        if(p>q){
            p=p-q;
        }
        else{
            q=q-p;
        }
    }
    return p;
}
int main(){
    cout<<((10*5)/gcd(10,5));
    cout<<((100*130)/gcd(100,130));
return 0;
}