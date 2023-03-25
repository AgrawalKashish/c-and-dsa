#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the ID" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The ID of employee is " << id << " and this is the employee number " << count<< endl;
    }
    // static functions cannot call non static variables
    // static function ||
    //                 \/
    static void getcount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count;
int main()
{
    Employee Kashish, Pranchi, Unnati;
    Kashish.setdata();
    Kashish.getdata();
    Employee::getcount();
    Pranchi.setdata();
    Pranchi.getdata();
    Employee::getcount();
    Unnati.setdata();
    Unnati.getdata();
    Employee::getcount();

    return 0;
}