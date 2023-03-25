 #include<iostream>
 using namespace std;
 class y;
 class x{
    int data;
    friend void add(x,y);
    public:
    void setvalue(int value){
        data  = value;
    }
 };
 class y{
     int num;
     friend void add(x,y);
      public:
    void setvalue(int value){
        num  = value;
    }
 };
 void add(x o1, y o2){
     cout<<"Summation of datas of class x and y objects gives me "<<(o1.data + o2.num)<<endl;
 }
 int main(){
      x a1;
      a1.setvalue(4);
      y b1;
      b1.setvalue(3);
      add(a1,b1);
 return 0;
 }