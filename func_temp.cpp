#include<iostream>
using namespace std;

template<class T1, class T2>
float avg(T1 a, T2 b){
     float avg = (a+b)/2;
     return avg;
}
int main(){
    float a;
    a = avg(5.4,2.6);
    printf("The average of 5 and 2 is %f",a);
return 0;
}