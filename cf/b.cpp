#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        char arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        if (arr[1] != arr[n])
        {
            for (int i = 2; i <= n; i++)
            {
                if (arr[i] <= arr[1])
                {
                    arr[0] = arr[i];
                    for (int j = i; j < n; j++)
                    {
                        arr[j] = arr[j + 1];
                    }
                    for (int i = 0; i < n; i++)
                    {
                        cout << arr[i];
                    }
                    break;
                }
                else
                {
                    for (int i = 1; i <= n; i++)
                    {
                        cout << arr[i];
                    }
                    break;
                }
            }
        }
        else
        {
            arr[0] = arr[n];
            for (int i = 0; i < n; i++)
            {
                cout << arr[i];
            }
        }

        t--;
    }
    return 0;
}