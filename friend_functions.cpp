#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2);
    void printnum()
    {
        cout << "Your number is (" << a << "+" << b << "i)" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, c3, sum;
    c1.setnumber(3, 5);
    c2.setnumber(4, 6);
    c1.printnum();
    c2.printnum();

    sum = sumcomplex(c1, c2);
    sum.printnum();
    return 0;
}

/*
PROPERTIES OF FRIEND FUNCTION
1. Not in the scope of class
2. It cannot be called from the objects of that class eg c1.sumcomolex()
3. Can be invoked without the help of any object.
4. Usually contains the objects as arguments.
5. Can be declared in public/private section of the class.
6. Cannot access the num directly by their names and need object_name.member_name to access any num.
 */