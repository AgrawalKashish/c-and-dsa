#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() {
        a=1;
    }
    number(int num)
    {
        a = num;
    };
    number(number &ob){
        cout<<"Copy Construcyor"<<endl;
        a = ob.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    number z1(z);
    z1.display();
    z2=z;//cc not invoked
    number z3=z; //cc invoked
    return 0;
}
//when no copy constructor is found,compiler supplies its own copy compiler