#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// array is sorted
// naive solution
int search(int arr[], int x)
{
	int i = 0;

	while(true)
	{
		if(arr[i] == x) return i;

		if(arr[i] > x) return -1;

		i++;
	}
}
// efficient sol

int bSearch(int arr[], int low, int high, int x)
{
	if(low > high)
		return -1;

	int mid = (low + high) / 2;

	if(arr[mid] == x)
		return mid;

	else if(arr[mid] > x)
		return bSearch(arr, low, mid - 1, x);

	else
		return bSearch(arr, mid + 1, high, x);
}


int searchb(int arr[], int x)
{
    if(arr[0] == x) return 0;

	int i = 1;

	while(arr[i] < x)
		i = i * 2;

	if(arr[i] == x) return i;


	return bSearch(arr, i / 2 + 1, i - 1, x);
}

int main(){

return 0;
}