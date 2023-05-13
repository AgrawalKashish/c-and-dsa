#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl '\n'
 
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
 
int ash = 1e6 + 1;
vector<int> pr, lpf(ash);
vector<bool> is_prime(ash, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i < ash; i++)
{
if (is_prime[i])
{
pr.push_back(i);
lpf[i] = i;
for (int j = i * i; j < ash; j += i)
{
is_prime[j] = false;
lpf[j] = i;
}
}
}
 
int t = 1;
cin >> t;
for (int ii = 1; ii <= t; ii++)
{
 
int n, x, g = 0;
cin >> n >> x;
vector<int> a(n);
for (int i = 0; i < n; i++)
cin >> a[i], g = __gcd(g, a[i]);
 
unordered_set<int> s(a.begin(), a.end());
if (s.size() == 1)
{
cout << 0 << endl;
continue;
}
 
unordered_set<int> p;
for (int i = 0; i < n; i++)
{
int t = a[i];
while (t > 1)
{
int f = lpf[t];
p.insert(f);
while (t % f == 0)
t /= f;
}
}
 
set<int> gap;
while (g > 1)
{
int f = lpf[g];
gap.insert(f);
while (g % f == 0)
g /= f;
}
 
if (!gap.empty() && *gap.begin() <= x)
{
cout << 1 << endl;
cout << *gap.begin() << endl;
}
else
{
bool ok = false;
int pp = upper_bound(pr.begin(), pr.end(), x) - pr.begin();
for (int i = pp - 1; i >= 0; i--)
{
if (p.find(pr[i]) == p.end())
{
cout << 1 << endl;
cout << pr[i] << endl;
ok = true;
break;
}
}
if (ok)
continue;
cout << "2\n2 3" << endl;
}
}
}
