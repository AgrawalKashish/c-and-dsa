#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int, int> p1;
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int, int> p2(10,20);
    cout<<p2.first<<" "<<p2.second<<endl;
    pair p3=make_pair(10,30);
    cout<<p3.first<<" "<<p3.second<<endl;
    pair <int, int> p4(1,12), p5(1,23);
    cout<<(p4==p5)<<" "
    <<(p4!=p5)<<" "
    <<(p4>p5)<<" "
    <<(p4<p5)<<" "<<endl;
return 0;
}