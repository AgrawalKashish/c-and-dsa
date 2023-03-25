#include<iostream>
using namespace std;
int main(){
    typedef struct employee{
        int eId;
        char favChar;
        float salary;
    }ep;
    union money 
    {
        int rice;
        char car;
        float pounds;
        // only one of thesde can be used at a time 
    };
    union money m1;
    m1.rice =34;
    cout<<m1.rice;
return 0;
}