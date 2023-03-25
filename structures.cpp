#include<iostream>
using namespace std;
struct employee
{
    int eId;
    char favChar;
    float salary;
};
int main(){
   struct employee Kashish;
   Kashish.eId =1;
   Kashish.favChar ='c';
   Kashish.salary = 12000000;
   cout<<"The value is "<<Kashish.eId<<endl;
   cout<<"The value is " <<Kashish.favChar<<endl;
   cout<<"The value is " <<Kashish.salary<<endl;
return 0;
}