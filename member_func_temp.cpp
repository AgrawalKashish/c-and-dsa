#include<iostream>
using namespace std;

template<class T>
class Harry{
  public:
   T data;
   Harry(T a){
    data = a;
   }
   void display();
};

template<class T>

 void Harry<T>:: display(){
    cout<<data<<endl;
   }
int main(){
 Harry<float> h(5.7);
 Harry<char> x('m');
 cout<<h.data<<endl;
 h.display();
 x.display();
return 0;
}