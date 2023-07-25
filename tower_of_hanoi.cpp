#include<iostream>
using namespace std;

void toi(int n, char A, char B, char C){
    if(n==1){
        cout << "move 1 from " << A << " to " << C << endl;
        return;
    }
    toi(n-1, A, C, B);
    cout << "move " << n << " from " << A << " to " << C << endl;
    toi(n-1, B, A, C);
}

int main(){
    toi(3, 'A', 'B', 'C');
    return 0;
}
