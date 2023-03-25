#include<iostream>
using namespace std;
 inline int product(int a, int b){
     static int c=0;   
     c=c+1;
    // return a*b+c;
     return c;
}
    float moneyReceived(int currentmoney, float factor=1.04){
        return currentmoney*factor;
    }
    // we can only use compulsory arguments at left only
int main(){
    int a,b, money=10000;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    cout<<"Product of a and b is "<<product(a,b)<<endl;
     cout<<"Product of a and b is "<<product(a,b)<<endl;
     cout<<"Product of a and b is "<<product(a,b)<<endl;
     cout<<"Product of a and b is "<<product(a,b)<<endl;
    cout<<"If you have "<<money<<"Rs in your bank account you will receive "<<moneyReceived(money)<<"Rs after 1 year."<<endl;
    cout<<"You are VIP: If you have "<<money<<"Rs in your bank account you will receive "<<moneyReceived(money,1.1)<<"Rs after 1 year.";
   return 0;
}