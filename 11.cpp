#include <iostream>
using namespace std;
int main()
{
  int t, n, arr[n];
    int  count2 = 0;
    int m = t >= 1 && t <= 5;
    int x = n >= 1 && n <= 20;
    cin>>(t);
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
    }

    for(int i = 0; i < t; i++)
    {
        if(n==2)
        {
            for(int j = 0; j < 1; j++)
            {
                if((arr[j + 1]) <= (n - 1))
                {
                    (count2)++;
                }
            }
            cout<<((count2)+1)<<endl;
        }

        else
        {
            for(int j = 0; j < n; j++)
            {
                if((arr[j + 1]) <= (n - 2 - arr[j]))
                {
                    (count2)++;
                }
            }
            cout<<((count2) +1)<<endl;
        }
    }
    return 0;
}