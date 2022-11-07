/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

ll GCD(ll x, ll y)
{
    if (x%y == 0)
    {
        return y;
    }

    return GCD(y, x%y);
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    ll a, b;

    cin >> a >> b;

    ll res = GCD(a, b);

    for (int i=0; i<res; i++)
    {
        cout << 1;
    }

    cout << '\n';

    return 0;
}