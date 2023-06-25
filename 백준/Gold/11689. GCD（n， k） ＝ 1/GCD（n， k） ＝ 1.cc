/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    ll n;
    cin >> n;
    ll res = n;
    for (ll i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            res = res / i * (i - 1);
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }

    if (n > 1)
    {
        res = res / n * (n - 1);
    }

    cout << res;

    return 0;
}