#include<iostream>
using namespace std;
/* creating a constructor --> CONSTRUCTORS ARE SPECIAL MEMBER
 THESE ARE USED TO INITIALIZE THE OBJECTS OF ITS CLASS
  FUNCTIONS WITH SAME NAME AS OF THE CLASS.IT IS AUTOMATICALLY INVOKED WHENEVER OBJECT IS CREATED. */

class complex{
    int a,b,a1,b1;
    public:
        complex(void); 
        //constructor declaration
     void printnum(){
         cout<<"Your no is "<<a<<"+"<<b<<"i"<<endl;
         cout<<"Your no is "<<a1<<"+"<<b1<<"i"<<endl;
     }
};
complex :: complex(void){  //constructor made due to same name
    a=10;
    b=0;
    a1=12;
    b1=13;
}
int main(){
    complex c;
    c.printnum();
return 0;
}

/*
1. IT SHOULD BE DECLARED IN THE PUBLIC SECTION OF THE CLASS.
2. THEY ARE AUTOMATICALLY INVOKED WHENEVER THE OBJECT IS CREATED.
3. DO NOT HAVE RETURN VALUES AND NOT HAVE RETURN TYPES.
4. IT CAN HAVE DEFAULT ARGUMENTS.
5. WE CANNOT  REFER TO THEIR ADDRESS.
 */