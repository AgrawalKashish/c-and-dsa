#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i)
    {
        b=j;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};

int main()
{

    /*
     Syntax for initialising list in constructor:
     constructor (argument-list): initilization-section

     {
         assignment + other code;
     }
    */

    // one which is declared first will initialize first

    Test t(4,6);
    
    return 0;
}