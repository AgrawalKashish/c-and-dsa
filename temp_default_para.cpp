#include<iostream>
using namespace std;

template<class T1=int, class T2= float>
class kash{
      public:
         T1 a;
         T2 b;
         kash(T1 x, T2 y){
            a = x;
            b = y;
         }
         void display(){
            cout<<"The value of a is "<<a<<endl<<"The value of b is "<<b<<endl;
         }
};
int main(){
kash<> k(4,8.7);
k.display();
kash<float,char> m(1.2,'o');
m.display();
return 0;
}