#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	if(b==0)
		return a;

	return gcd(b, a % b);
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> ans(n);
        for (int i = 1; i <=n; i++) {
           ans[i-1]= max((v[i-1]-(i)), (i-v[i-1]));
        }
        sort(ans.begin(),ans.end());
        int anss=ans[0];
        for(int i=1;i<=n;i++){
                anss=gcd(anss,ans[i]);
            }
         cout<<anss<<endl;
    }

    return 0;
}
