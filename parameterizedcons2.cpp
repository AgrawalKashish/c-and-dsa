#include <iostream>
#include<math.h>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displaypoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
    
};
int main()
{
    point p(1, 1);
    point q(4, 7);
    p.displaypoint();
    q.displaypoint();
    return 0;
}