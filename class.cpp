#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee Kashish;
    //  Kashish.a = 34; --> will throw error because it is private data

    Kashish.d = 34;
    Kashish.e = 1;
    Kashish.setData(1, 2, 3);
    Kashish.getData();
    return 0;
}
// why class?? not structures??
// structure donot as data heading or not  secure and can be access from anywhere
// structure can not hold functions but class can do easily