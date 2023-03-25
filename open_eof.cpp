#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream out;
    out.open("sample.txt");
    out<<"Unity Always";
    out.close();
 
    string st;
    ifstream in;
    in.open("sample.txt");
    // getline(in,st);
    // cout<<st;
    while(in.eof()==0) //eof is end of file
    {
       getline(in, st);
       cout<<st<<endl;
    }
    in.close();
return 0;
}