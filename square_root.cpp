#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int square_root(int n){
    int i=1;
    while(i*i<=n){
        i++;
    }
   return (i-1);
}
int sqRootFloor(int x)
{
	int low = 1, high = x, ans = -1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		int mSq = mid * mid;

		if(mSq == x)
			return mid;
		else if(mSq > x)
			high = mid - 1;
		else
		{
			low = mid + 1;
			ans = mid;
		}
	}

	return ans;
}
int main(){
    int n=100;
    cout<<square_root(n);
    cout<<sqRootFloor(n);
return 0;
}