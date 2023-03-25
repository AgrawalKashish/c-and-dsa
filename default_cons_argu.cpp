#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:
      simple(int a, int b=8){ //look carefully
          data1=a;
          data2=b;
      }
      void printdata(){
          cout<<"("<<data1<<","<<data2<<")"<<endl;
      }
};
int main(){
    simple s(2,4), s1(6);
    s.printdata();
    s1.printdata();
return 0;
}