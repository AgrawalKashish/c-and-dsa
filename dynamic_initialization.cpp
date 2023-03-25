#include<iostream>
using namespace std;
class Bank{
 int principal;
 int years;
 int rate;
 float value;

 public:
    // Bank(){}
    Bank(int p,int y,float r);
    Bank(int p,int y,int r);
    void show();
};
Bank :: Bank(int p,int y,float r){
    principal =p;
    years = y;
    rate =r;

    value = principal;
    for(int i=0; i<y;i++){
        value = value *(1+r);
    }
}

Bank :: Bank(int p,int y,int r){
    principal =p;
    years = y;
    rate =r;

    value = principal;
    for(int i=0; i<y;i++){
        value = value + (value*(r))/100;
    }
}

void Bank :: show(){
    cout<<endl<<"Principal amount was "<<principal<<"."<<endl
    <<"Return Value after SI of "<<years<<"years is "<<value<<endl;
}
int main(){
    // Bank b1,b2;
    // Bank b1,b2,b3;
    int p,y;
    int r;
    float R;
    cin>>p>>y>>R;
  Bank  b1 = Bank(p,y,R);
    b1.show();
    cin>>p>>y>>r;
   Bank b2 = Bank(p,y,r);
    b2.show();
return 0;
}