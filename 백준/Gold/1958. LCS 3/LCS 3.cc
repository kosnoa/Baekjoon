#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int dp[101][101][101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b, c;

    cin >> a >> b >> c;

    int x = b.size(), y = a.size(), z = c.size();
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            for (int k = 1; k <= z; k++)
            {
                if (b[i - 1] == a[j - 1] && b[i - 1] == c[k - 1])
                {
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                }
                else
                {
                    dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
                }
            }
        }
    }

    cout << dp[x][y][z] << '\n';

    return 0;
}