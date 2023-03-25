#include <iostream>
#include <string.h>
using namespace std;
class binary
{
    string s;
    //  ny default everything in class is private
public:
    void read(void);
    void chk_bin(void);
    void display(void);
    void ones(void);
};
void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect format" << endl;
            exit(0);
        }
    }
}
void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Display the one's compliment of given binary" << endl;
    for (int i = 0; i < s.length(); i++)
    {

        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.ones();
    b.display();
    return 0;
}