#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int end = n - 1;
        int start = n - 1;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int count = 0;
        int answer = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            while (end >= 0 && a[end] > b[i])
            {
                count++;
                end--;
            }
            answer = (answer * (count)) % MOD;
            count--;
        }
        cout << answer % MOD << endl;
    }
    return 0;
}