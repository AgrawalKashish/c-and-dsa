#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// naive solution
int nsearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;

    return -1;
}
// efficient sol
int esearch(int nums[], int n, int target)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[left] < nums[mid])
        {
            // left array sorted
            if (nums[left] <= target && target < nums[mid])
                right = mid - 1;
            else if (nums[left] == target)
                return left;
            else
                left = mid + 1;
        }
        else
        {
            // right array sorted
            if (nums[mid] < target && target <= nums[right])
                left = mid + 1;
            else if (nums[right] == target)
                return right;
            else
                right = mid - 1;
        }
    }
    return -1;
}
int main()
{
     int arr[] = {100, 200, 400, 1000, 10, 20}, n = 6;

        int x = 10;

	cout << nsearch(arr, n, x)<<endl;
    cout << esearch(arr, n, x);
    return 0;
}