/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

struct Compare
{
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second > b.second;
    }
};

priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, Compare> pq;
int n, l;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> l;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        pq.push({i, num});
        while (pq.top().first < i - l + 1)
        {
            pq.pop();
        }

        cout << pq.top().second << ' ';
    }

    return 0;
}