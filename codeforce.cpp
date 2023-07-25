#include <bits/stdc++.h>
using namespace std;


vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> res;
  if(n==1){
    res[0][0]=1;
    return res;
  }
  for(int i=0;i<n;i++){
       res[i][0]=1;
   }
   res[1][1]=1;
   if(n==2) return res;
   for(int i=2;i<n;i++){
     for(int j=1;j<=i;j++){
       if(j==i) {
         res[i][j] = 1;
       }
       else{
         res[i][j]=(res[i-1][j-1] + res[i-1][j]);
       }
     }
   }
   return res;
}

int  main(){
  vector<vector<long long int>>res=  printPascal(5);
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
