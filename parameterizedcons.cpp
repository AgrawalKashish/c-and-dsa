#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        complex(int , int); 
     void printnum(){
         cout<<"Your no is "<<a<<"+"<<b<<"i"<<endl;
     }
};
complex :: complex(int x, int y){ 
    a = x;
    b = y;
}
int main(){
    int m,n,l,o;
    cin>>m>>n>>l>>o;
    complex c(m,n); //implicit call

    complex z= complex(l,o); //explicit call
    c.printnum();
    z.printnum();
return 0;
}
