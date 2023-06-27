/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
ll n, k, res, mod = 1e9 + 7;

ll power(ll x, ll y)
{
    if (y == 0)
    {
        return 1;
    }

    if (y % 2 > 0)
    {
        return (power(x, y - 1) * x) % mod;
    }

    ll temp = power(x, y / 2) % mod;
    return (temp * temp) % mod;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> k;

    ll x = 1, y = 1;
    for (int i = 1; i <= n; i++)
    {
        x = (x * i) % mod;
    }

    for (int i = 1; i <= k; i++)
    {
        y = (y * i) % mod;
    }

    for (int i = 1; i <= n - k; i++)
    {
        y = (y * i) % mod;
    }

    ll z = power(y, mod - 2);
    res = (x * z) % mod;

    cout << res;

    return 0;
}