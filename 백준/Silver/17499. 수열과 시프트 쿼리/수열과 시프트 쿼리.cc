/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int n, k, s;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> k;
    vector<ll> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    for (int i = 0; i < k; i++)
    {
        int p;
        cin >> p;

        if (p == 1)
        {
            int a, b;
            cin >> a >> b;
            v[(s + a - 1) % n] += b;
        }
        else if (p == 2)
        {
            int a;
            cin >> a;
            s = (s + n - a) % n;
        }
        else if (p == 3)
        {
            int a;
            cin >> a;
            s = (s + a) % n;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[(s + i) % n] << ' ';
    }

    return 0;
}