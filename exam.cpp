#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A
  
{
    public:
        int i;
        A()
        {  
               i=0;  
        }
        A(int x)
        {  
               i=x+1;  
        }
        A(int y, int x)
        {  
               i=x+y;  
        }
};
int main(){
  A obj1(10);
  A obj2(10,20);
  A obj3;
return 0;
}