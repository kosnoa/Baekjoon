/* Code By kosnoa
GitHub : kosnoa */


#pragma GCC optimize("Ofast")
#pragma GCC ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    ll a, b;
    vector<ll> v;
    cin >> a >> b;

    for(ll i=1; i<=a; i++)
    {
        if (a%i == 0)
        {
            v.push_back(i);
        }
    }

    if (v.size() < b)
    {
        cout << "0" << '\n';
    }
    else
    {
        cout << v[b-1] << '\n';
    }

    return 0;
}