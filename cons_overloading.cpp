#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void displaypoint()
    {
        cout << "The point is (" << a << "," << b << ")" << endl;
    }
};
int main()
{
    complex c1(4, 6);
    c1.displaypoint();
    complex c2(4);
    c2.displaypoint(); // over loading will hold up
    return 0;
}