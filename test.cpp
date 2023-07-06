#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>  prices={2,9,0,4,10};
 int n = prices.size();
        vector<vector<int>> dp(n+1, vector<int>(2,0));
        
        for(int i=n-1;i>=0;i--){
           for(int buy =0;buy<2;buy++){
             if(buy==1){if(i+1<=n-1){
                
              dp[i][buy] = max(-prices[i] + dp[i+1][0], 0+ dp[i+1][1]);
             }
              } 
             else {
            if(i+2<=n-1)
            dp[i][buy] = max(prices[i] + dp[i + 2][1], 0 + dp[i + 1][0]);
             }
         }
     }
     cout<<dp[0][1];
return 0;
}