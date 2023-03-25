#include<iostream>
using namespace std;
//destructor never takes an argument and neither return any value
int count=0;
class num{
    public:
      num(){
          count++;
          cout<<"This is the time when constructor is called  for object "<<count<<endl;
      }
       ~num(){
      cout<<"Destructor is called for object "<<count<<endl;
      count--;
  }
};
 
int main(){
    cout<<"Main Function"<<endl;
    num n1;
    {
        cout<<"entering the loop"<<endl;
        cout<<"Creating 2 more objects"<<endl;
        
        num n2,n3;
        cout<<"exit the loop"<<endl;
    }
return 0;
}