/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
llu n;

llu mul(llu p)
{
    ll k = 1;
    for (llu i = 0; i < p; i++)
    {
        k *= 3;
    }

    return k;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> n;

    llu val = 0, i = 0;

    while (n > 0)
    {
        if (n & (1 << 0) != 0)
        {
            val += mul(i);
        }
        n >>= 1;
        i++;
    }

    cout << val;

    return 0;
}