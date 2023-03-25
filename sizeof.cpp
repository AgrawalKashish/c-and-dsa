#include<iostream>
using namespace std;
int main(){
    cout<<"The size of 34.4  is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    float x=344, &y=x;
    cout<<x<<endl;
    cout<<y;
    return 0;
}