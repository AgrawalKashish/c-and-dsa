#include <iostream>
using namespace std;

class student
{
    protected:
      int roll_no;
    public:
       void setnum(int a)
    {
        roll_no = a;
    }
    void printnum(){
        cout<<"Your roll no is "<<roll_no<<endl;
    }
};
class test : virtual public student{
 protected: 
  float maths,phy;
  public: 
    void setmarks(float m1, float m2){
        maths = m1;
        phy = m2;
    }
    void printmarks(void){
        cout<<"Marks in maths: "<<maths<<endl;
        cout<<"Marks in physics: "<<phy<<endl;
    }
};
class sport : virtual public student{
   protected:
    float score;
    public:
      void setscore(float point){
          score = point;
      }
     void printscore(void){
          cout<<"Your score in PHE: "<<score<<endl;
      }
};
class result : public sport, public test{
       private: 
         float total;
         public: 
         void display(){
             printnum();
             printmarks();
             printscore();
             cout<<"Total marks are "<<(maths+phy+score)<<endl;
         }
};
int main()
{
    result r1;
    r1.setnum(2);
    r1.setmarks(45,50);
    r1.setscore(48);
    r1.display();
    return 0;
}

/*
syntax
class B: virtual public A{

};
class C: VIRTUAL PUBLIC A{

};
*/