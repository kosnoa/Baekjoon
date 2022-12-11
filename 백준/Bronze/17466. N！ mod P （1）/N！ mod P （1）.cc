/* Code By kosnoa
GitHub : kosnoa */


#pragma GCC optimize("Ofast")
#pragma GCC ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

ll modFact(ll n, ll p)
{
    ll res = 1;
    for (ll i=1; i<=n; i++)
    {
        res = (res * i) % p;
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    ll n, p;
    cin >> n >> p;

    cout << modFact(n, p) << '\n';

    return 0;
}