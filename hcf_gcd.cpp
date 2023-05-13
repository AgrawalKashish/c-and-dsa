#include<iostream>
using namespace std;
int gcd_(int a, int b)
{
	if(b==0)
		return a;

	return gcd_(b, a % b);
}
int gcd(int a,int b){
    int p=a;
    int q=b;
    while(p!=q){
        if(p>q){
            p=p-q;
        }
        else{
            q=q-p;
        }
    }
    return p;
}
int main(){
    cout<<gcd(4,13);
    cout<<gcd_(4,13);
return 0;
}