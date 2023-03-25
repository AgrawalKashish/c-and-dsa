//vector declaration
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{2,5,6};
    v.push_back(10);
    v.push_back(1);
    v.push_back(5);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        v[i]=3+i;
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int &x: v){
        x=6+x;
    }
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}