/* Code By kosnoa
GitHub : kosnoa */


#pragma GCC optimize("Ofast")
#pragma GCC ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

ll dp[100];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    dp[1] = 1;
    dp[2] = 1;

    for (int i=3; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << '\n';

    return 0;
}