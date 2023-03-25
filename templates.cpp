#include <iostream>
using namespace std;


template <class T>
class vector
{
public:
  T *arr;
  int size;
  vector(T m)
  {
    size = m;
    arr = new T[size];
  }
  T docpro(vector &v)
  {
    T d = 0;
    for (int i = 0; i < size; i++)
    {
      d += this->arr[i] * v.arr[i];
    }
    return d;
  }
};
int main()
{
  vector <float>v1(3);
  v1.arr[0] = 2.4;
  v1.arr[1] = 1.0;
  v1.arr[2] = 2.0;
  vector <float>v2(3);
  v2.arr[0] = 2.4;
  v2.arr[1] = 1.0;
  v2.arr[2] = 2.0;
  float a = v1.docpro(v2);
  cout<<a<<endl;
  return 0;
}

/*
SYNTAX
template <class T>
class vector{
    T* arr; --> T can be float,T,char etc.....
    public:
      vector(T* arr){}

      T main(){
        vector<T> myvec(ptr);
        vector<float> myfvec (ptr);
      }
}
*/
/*
STL AND TEMPLATES ARE VERY NEEDY and HELPFUL FOR CP
*/