#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout << "ARRAY" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  " << endl;
        // cout << v.at(i) << endl;
    }
}
int main()
{
    vector<int> vec1;
    vector<char> vec2(4);
    vector<char> vec3(vec2);
    vector<int> v4(7, 3); // 6 element with 3s
    // vec2.push_back('5');
    // display(vec1);
    // display(vec2);
    // display(vec3);
    cout << v4.size() << endl;
    // int element;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter an element to add to this vector" << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // // vec1.pop_back(); use to delete the last inserted element
    // display(vec1);
    //      vector<int> :: iterator iter = vec1.begin();
    //      vec1.insert(iter+1,5, 566);
    // display(vec1);
    return 0;
}
/*
Components of Standard Template Library
1. Containers --> Stores Data, uses template classes
2. Algorithms --> Sorting,searching of array, uses template functions
3. Iterators  --> It is an object which points to an element in a container
*/
/*
Containers are of three types
1. Sequence Containers   : Stores data in linear fashion
                        i. Vector
                       ii. List
                      iii. Dequeue

2. Associative Containers:  Direct Access --> set/multiset
                                          --> map/multimap

3. Derived Containers    :  Real World Modelling
                         i. Stack
                        ii. Queue
                       iii. Priority Queue
*/