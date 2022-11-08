/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
typedef vector<vector<ll>> matrix;
ll mod = 1000000007;
ll dp[16];

matrix operator*(matrix &a, matrix &b)
{
    matrix temp = {{0, 0}, {0, 0}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                temp[i][j] = (temp[i][j] + a[i][k] * b[k][j] + mod) % mod;
            }
        }
    }
    return temp;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    ll n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << "0" << '\n';
        return 0;
    }

    n /= 2;

    matrix ans = {{1, 0}, {0, 1}};
    matrix a = {{4, -1}, {1, 0}};

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans = ans * a;
        }

        a = a * a;

        n /= 2;
    }

    cout << (ans[0][0] + ans[0][1]) % mod << '\n';

    return 0;
}