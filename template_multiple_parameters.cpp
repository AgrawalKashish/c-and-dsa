#include<iostream>
using namespace std;

/*
template<class t1,class t2>
class xyz{
    //body
}
*/
template<class T1,class T2>
class my{
    public:
       T1 data1;
       T2 data2;

        void display(){
           cout<<this->data1<<"  "<<this->data2<<endl;
        }
        my(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
};
int main(){
 my <int,char>obj(1,'c');
   obj.display();
return 0;
}