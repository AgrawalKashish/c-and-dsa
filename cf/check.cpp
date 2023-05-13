#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 int t=20;
int m=3;
int *n=&t;
int *z=&m;
cout<<(n-z)<<(*n-*z);
return 0;
}