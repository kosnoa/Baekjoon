/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int k, n;
vector<ll> vec;
priority_queue<ll, vector<ll>, greater<ll>> pq;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> k >> n;

    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
        pq.push(a);
    }

    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        res = pq.top();
        pq.pop();

        for (int j = 0; j < k; j++)
        {
            ll val = res * vec[j];

            pq.push(val);

            if (res % vec[j] == 0)
            {
                break;
            }
        }
    }

    cout << res;

    return 0;
}