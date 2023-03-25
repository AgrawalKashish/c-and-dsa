#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(56);
    cout<<pq.size()<<" ";
    cout<<endl;
    cout<<pq.top()<<" ";
    cout<<endl;
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    //for min heap
    priority_queue<int, vector<int>,greater<int>> pq1;
    pq1.push(10);
    pq1.push(20);
    pq1.push(56);
    cout<<pq1.size()<<" ";
    cout<<endl;
    cout<<pq1.top()<<" ";
    cout<<endl;
    while(pq1.empty()==false){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
return 0;
}