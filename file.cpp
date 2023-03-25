#include<iostream>
#include<fstream>
using namespace std;


int main(){
//opening file using constructor and writing it
// string st = "Kashish Agrawal";
// ofstream out("samplefile.txt"); //writing operation
// out<<st;
string st2;
//opening file using constructor and reading it
ifstream in("samplefile.txt"); //reading operation
// in>>st2; //get only one word
getline(in,st2);
cout<<st2;
return 0;
}
/*
The useful classes for working with files in c++ are:
1. fstreambase --> library class
2. ifstream 
3. ofstream
2 & 3 are derived from 1

In order to work with files
1. open it
 i. Using the constructor
 ii. Using the member function open() of the class
*/