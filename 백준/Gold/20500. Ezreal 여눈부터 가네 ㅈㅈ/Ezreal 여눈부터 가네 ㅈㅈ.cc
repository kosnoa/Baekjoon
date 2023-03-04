/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
ll dp[1517][3];
ll mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    dp[1][0] = 0;
    dp[2][0] = 1;
    dp[2][1] = 1;
    dp[2][2] = 0;

    for (int i=3; i<=n; i++)
    {
        dp[i][0] = ((dp[i-1][1] % mod) + (dp[i-1][2] % mod)) % mod;
        dp[i][1] = ((dp[i-1][0] % mod) + (dp[i-1][2] % mod)) % mod;
        dp[i][2] = ((dp[i-1][0] % mod) + (dp[i-1][1] % mod)) % mod;
    }

    cout << dp[n][0] << '\n';

    return 0;
}