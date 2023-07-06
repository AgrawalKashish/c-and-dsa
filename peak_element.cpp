#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// element is not less than its neighbours
//efficient
int egetPeak(int arr[], int n)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
            (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            return arr[mid];
        if (mid > 0 && arr[mid - 1] >= arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
// naive
int ngetPeak(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    if (arr[0] >= arr[1])
        return arr[0];
    if (arr[n - 1] >= arr[n - 2])
        return arr[n - 1];

    for (int i = 1; i < n - 1; i++)
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            return arr[i];
    return 0;
}
int main()
{
    int arr[] = {2, 3, 4,5, 8, 23, 24}, n = 7;

    cout << egetPeak(arr, n)<<endl;
    cout << ngetPeak(arr, n);
    return 0;
}