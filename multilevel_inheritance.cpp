#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};
void Student ::set_roll_no(int r)
{
    roll_no = r;
}
void Student ::get_roll_no()
{
    cout << "The roll number is " << roll_no << endl;
}

class Exam : public Student
{
protected:
    float maths, phy;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam ::set_marks(float m, float p)
{
    maths = m;
    phy = p;
}
void Exam ::get_marks(void)
{
    cout << "Maths marks are " << maths << endl;
    cout << "Physics marks are " << phy << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_no();
        get_marks();
        percentage = (maths + phy) / 2;
        cout << "Percentage obtained " << percentage << "%" << endl;
        if (percentage >= 33)
        {
            cout << "You are pass" << endl;
        }
        else
        {
            cout << "You are fail" << endl;
        }
    }
};
int main()
{
    Result Kashish;
    int m,p;
    cin>>m>>p;
    Kashish.set_roll_no(15);
    Kashish.set_marks(m,p);
    Kashish.display();
    return 0;
}
/* 
1. If we are inheriting  C from A and B. A---> B and B -----> C.
2. A--->B ---->C is called inheritance path
*/