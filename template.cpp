#include<iostream>
using namespace std;
template <typename T>
T myMax(T x, T y){
    return (x > y) ? x : y;
}
template <typename T1>
T1 arrMax(T1 arr[], int n){
    T1 res= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]> res){
            res=arr[i];
        }
    }
    return res;
}
template <typename class_>
class pair_{
    public:
       class_ x,y;
       pair_(class_ i, class_ j){x=i;y=j;}
       class_ getFirst(){return x;}
       class_ getSecond(){return y;}
}; 
//for template
// pair_<class_>::getFirst(){
//     return x;
// }
int main()
{
    int arr1[] = {10, 40, 3};
     float arr2[] = {10.5, 3.5, 1.5, 30.5};
    cout<<myMax <int> (3, 7)<< endl;
    cout<<myMax <char> ('c', 'g')<< endl;
    cout<<arrMax <int> (arr1, 3)<< " ";
    cout<<arrMax <float> (arr2, 4) << " ";
    pair_ <int> p1(10, 20);
    cout << p1.getFirst() << " " << p1.getSecond();
    return 0;
}