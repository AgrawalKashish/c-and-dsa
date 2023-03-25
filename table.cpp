#include<iostream>
using namespace std;
int main(){
    int n,N;
    cout<<"Enter the digit whose table is needed ";
    cin>>n;
    for(int i=1;i<=10;i++){
        N= n*i;
        cout<<""<<n<<" * "<< i<<"= "<<N<<endl;
    }
    return 0;
}