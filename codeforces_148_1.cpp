#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        string s;
        cin >> s;
        int n = s.length();
        set<char> st;
        for (int i = 0; i < n / 2; i++)
        {
            st.insert(s[i]);
        }
        if(st.size()==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        t--;

    }

    return 0;
}