/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

ll mod = 45678;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    ll sum = 5;

    if (n > 1)
    {
        sum += 7;
    }

    for (int i = 3; i <= n; i++)
    {
        ll tmp = 7 + ((i - 2) * 3);
        sum += tmp;
    }

    cout << sum % mod << '\n';

    return 0;
}