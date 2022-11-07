/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

queue<pair<ll, ll>> qp;
bool check[500005][2];
ll n, k;

// 케이스를 나눠서 계산

int bfs()
{
    qp.push({n, 0});
    check[n][0] = true;

    while (!qp.empty())
    {

        pair<ll, ll> cur = qp.front();
        qp.pop();
        ll tmp = k + cur.second * (cur.second + 1) / 2;

        if (cur.first > 500000 || tmp > 500000)
        {
            return -1;
        }

        if (cur.first == tmp || check[tmp][cur.second % 2])
        {
            return cur.second;
        }

        ll x1 = cur.first - 1;
        ll x2 = cur.first + 1;
        ll x3 = cur.first * 2;

        if (x1 >= 0 && x1 <= 500000 && !check[x1][(cur.second + 1) % 2])
        {
            qp.push({x1, cur.second + 1});
            check[x1][(cur.second + 1) % 2] = true;
        }

        if (x2 <= 500000 && !check[x2][(cur.second + 1) % 2])
        {
            qp.push({x2, cur.second + 1});
            check[x2][(cur.second + 1) % 2] = true;
        }

        if (x3 <= 500000 && !check[x3][(cur.second + 1) % 2])
        {
            qp.push({x3, cur.second + 1});
            check[x3][(cur.second + 1) % 2] = true;
        }
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> k;

    cout << bfs() << '\n';

    return 0;
}