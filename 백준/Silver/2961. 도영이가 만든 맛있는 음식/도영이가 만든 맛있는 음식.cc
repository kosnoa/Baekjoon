/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int n, val = INT_MAX;
pair<int, int> p[10];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    for (int i = 1; i < (1 << n); i++)
    {
        int s = 1, b = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                s *= p[j].first;
                b += p[j].second;
            }
        }

        val = min(val, abs(s - b));
    }

    cout << val;

    return 0;
}