/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
vector<ll> v(46);

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    v[0] = 1;
    v[1] = 2;
    for (int i = 2; i < 46; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<ll> res;
        for (int i = 45; i >= 0; i--)
        {
            if (v[i] <= n)
            {
                n -= v[i];
                res.push_back(v[i]);
            }
        }

        sort(res.begin(), res.end());
        for (auto i : res)
        {
            cout << i << ' ';
        }

        cout << '\n';
    }

    return 0;
}