#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    void getdata()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << img << endl;
    }

    void setdata(int a, int b)
    {
        real = a;
        img = b;
    }
};
int main()
{
    complex c;

    // complex *ptr = new complex;
    complex *ptr = &c;
    //    (*ptr).setdata(1,2);
    ptr->setdata(1, 2);
    // (*ptr).getdata();
    ptr->getdata();
    return 0;
}

// Arrow operator is  ptr->setdata(1,2)