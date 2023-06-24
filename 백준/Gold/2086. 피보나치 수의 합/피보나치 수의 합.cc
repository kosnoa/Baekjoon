/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
ll mod = 1e9;
ll n, m, res;
ll ans[2][2] = {0, 1, 1, 1};

void calc(ll a[][2], ll b[][2])
{
    ll tmp[2][2] = {
        0,
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                tmp[i][j] += (a[i][k] * b[k][j]) % mod;
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            a[i][j] = tmp[i][j] % mod;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;
    n++;

    for (int i = -1; i < 2; i += 2)
    {
        ll tmp[2][2] = {1, 0, 0, 1};
        while (n)
        {
            if (n & 1)
            {
                calc(tmp, ans);
            }
            calc(ans, ans);
            n >>= 1;
        }
        res = i * (res + tmp[1][0] - 1) % mod;
        ans[0][0] = 0;
        ans[0][1] = ans[1][0] = ans[1][1] = 1;
        n = m + 2;
    }

    cout << (res + mod) % mod;

    return 0;
}