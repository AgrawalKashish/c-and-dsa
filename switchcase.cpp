#include<iostream>
using namespace std;
int main(){
    int age;
       cout<<"Enter your age ";
       cin>>age;
    switch(age){
        case 18:
        cout<<"Your age is 18";
        break;
        case 22:
        cout<<"Your age is 22";
        break;
        case 13:
        cout<<"Your age is 13";
        break;
    default:
        cout<<"No special cases"; 
    }

    return 0;
}