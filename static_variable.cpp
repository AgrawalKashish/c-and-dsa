#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    //    static variable by default initialize with 0
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
};

int Employee ::count; // defalut value is zero.
int main()
{
    Employee Kashish, Pranchi, Unnati;
    Kashish.setdata();
    Kashish.getdata();
    Pranchi.setdata();
    Pranchi.getdata();
    Unnati.setdata();
    Unnati.getdata();

    return 0;
}
// STATIC VARAIBLE IS ONE BUT SHARED BY ALL LIKEWISE KASHISH,PRANCHI AND UNNATI DOES