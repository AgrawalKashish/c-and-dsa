#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A & setdata(int a)
    {
        this->a = a;
        return *this;
        //here this is a pointer
        // this used to points to the object which invokes the memnber function
    }

    void getdata()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A a;
    a.setdata(4).getdata();
    // a.getdata();
    return 0;
}