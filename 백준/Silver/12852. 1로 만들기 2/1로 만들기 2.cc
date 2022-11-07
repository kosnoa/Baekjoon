/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

queue<pair<ll, ll>> qp;
bool check[1000005];
ll arr[1000005];
vector<ll> v;
ll n;

int bfs()
{
    qp.push({n, 0});

    while (!qp.empty())
    {
        pair<ll, ll> cur = qp.front();
        qp.pop();
        check[cur.first] = true;

        if (cur.first == 1)
        {
            while (cur.first != n)
            {
                v.push_back(cur.first);
                cur.first = arr[cur.first];
            }
            return cur.second;
        }

        if (cur.first % 3 == 0 && !check[cur.first / 3])
        {
            check[cur.first / 3] = true;
            qp.push({cur.first / 3, cur.second + 1});
            arr[cur.first / 3] = cur.first;
        }

        if (cur.first % 2 == 0 && !check[cur.first / 2])
        {
            check[cur.first / 2] = true;
            qp.push({cur.first / 2, cur.second + 1});
            arr[cur.first / 2] = cur.first;
        }

        if (!check[cur.first - 1] && cur.first - 1 > 0)
        {
            check[cur.first - 1] = true;
            qp.push({cur.first - 1, cur.second + 1});
            arr[cur.first - 1] = cur.first;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;

    cout << bfs() << '\n';
    cout << n << ' ';

    reverse(v.begin(), v.end());

    for (int i=0; i<v.size(); i++)
    {
        cout << v[i] << ' ';
    }

    return 0;
}