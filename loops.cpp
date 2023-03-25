#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0;i<4;i++){
        cout<<i<<endl;
    }
    for(i=0;i<4;i++){
        cout<<i<<endl;
        i++;
    }
    while(i<=4){
        cout<<i<<endl;
        i++;
    }
    do{
        cout<<i<<endl;
        i++;
    }while(i<=4);
    return 0;
}