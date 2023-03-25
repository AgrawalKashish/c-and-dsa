#include<iostream>
using namespace std;
void toi(int n, char A, char B, char C){
    if(n==1){
        cout<<"move 1 from a to c"<<endl;
        return;
    }
    toi(n-1,A,C,B);
    cout<<"move n from a to c"<<endl;
    toi(n-1,A,B,C);
}
int main(){
      toi(3,'A','b','c');
return 0;
}