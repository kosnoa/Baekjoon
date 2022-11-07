/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int dp[35][35];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    for (int i=1; i<=30; i++)
    {
        dp[i][1] = 1;
    }

    for (int i=2; i<=31; i++)
    {
        for (int j=2; j<=i; j++) 
        {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }

    int n, m;
    cin >> n >> m;
    cout << dp[n][m] << '\n';

    return 0;
}