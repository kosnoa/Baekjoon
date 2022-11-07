#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    int dp[1001][3] = {0,};

    for (int i=1; i<=n; i++)
    {
        cin >> dp[i][0] >> dp[i][1] >> dp[i][2];
        dp[i][0] += min(dp[i-1][1], dp[i-1][2]);
        dp[i][1] += min(dp[i-1][0], dp[i-1][2]);
        dp[i][2] += min(dp[i-1][1], dp[i-1][0]);
    }

    cout << min({dp[n][0], dp[n][1], dp[n][2]})  << '\n';

    return 0;
}