#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }
}
int main()
{

    list<int> list1;
    list<int> list2(3);
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(6);
    list1.push_back(8);
    //FOR REMOVING ELEMENTS IN THE LIST
    // list1.pop_front();
    // list1.pop_back();
    // list1.remove(3);

    //    list<int> :: iterator iter;
    //    iter = list1.begin();
    //    cout<< (*(iter))<<endl;
    //    iter++;
    //    cout<<*iter;

    //SORTING OF LIST
    // list1.sort();
    display(list1);

    //for empty list2
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 23;
    iter++;
     *iter = 3;
    iter++;
     *iter = 2;
    iter++;
    // list2.sort();
    display(list2);
    // list1.merge(list2);
    // display(list1);

    //REVERSING THE LIST
    // list1.reverse();
    // display(list1);

    //swaping
    // list1.swap(list2);
    // display(list1);
    return 0;
}
// efficient for deletion and insertion of array