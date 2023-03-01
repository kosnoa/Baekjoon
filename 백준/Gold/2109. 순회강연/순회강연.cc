/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
priority_queue<ll> pq;
vector<pair<ll, ll>> vp;
int n, ans;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vp.push_back({b, a});
    }

    sort(vp.begin(), vp.end());

    for (int i = 0; i < n; i++)
    {
        pq.push(-vp[i].second);
        ans += vp[i].second;

        if (pq.size() > vp[i].first)
        {
            ans += pq.top();
            pq.pop();
        }
    }

    cout << ans << '\n';

    return 0;
}