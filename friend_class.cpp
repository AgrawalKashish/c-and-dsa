#include <iostream>
using namespace std;

// forward declaration

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};
class complex
{
    int a, b;
    // individual declaration of functions as friend
    
    // friend int calculator ::sumrealcomplex(complex o1, complex o2);
    // friend int calculator ::sumcompcomplex(complex o1, complex o2);

    // Declaring the entire calculator class as friend
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnum()
    {
        cout << "Your number is (" << a << "+" << b << "i)" << endl;
    }
};
int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
// class calculator {
//     public:
//     int add(int a, int b){
//         return a+b;
//     }
//     int sumrealcomplex(complex o1, complex o2){
//         return (o1.a + o2.a);
//     }
// };
int main()
{
    complex o1, o2;
    o1.setnumber(1, 2);
    o2.setnumber(1, 4);
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    int resc = calc.sumcompcomplex(o1, o2);
    cout << res << endl;
    cout << resc << endl;
    return 0;
}