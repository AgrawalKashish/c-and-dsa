#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}
float vol(double r, int h){
    return(3.14*r*r*h);
}
int main(){
   cout<<"The sum of 4 and 5 is "<<add(4,5)<<endl;
   cout<<"The volume of cylinder is "<<vol(7,1)<<endl;
   cout<<"The sum of 5,6 and 7 is "<<add(5,7,6);
return 0;
}

// both the func will run seperately and once