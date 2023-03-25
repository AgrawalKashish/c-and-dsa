#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream kash("sample.txt");
    string name;
    cout << "Enter your name" << endl;
    cin >> name;
    kash << name;
    kash.close();

    ifstream kashish("sample.txt");
    string content;
    kashish>>content;
    cout<<"The content of this file is "<<content;
    kashish.close();
    return 0;
}