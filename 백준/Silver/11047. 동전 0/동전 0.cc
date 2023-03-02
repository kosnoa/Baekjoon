/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int n, k, cnt;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> k;
    vector<ll> v(n);

    for (auto &i : v)
    {
        cin >> i;
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++)
    {
        if (k < v[i])
        {
            continue;
        }

        cnt += k / v[i];
        k %= v[i];
    }

    cout << cnt << '\n';

    return 0;
}