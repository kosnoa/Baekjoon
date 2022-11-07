/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

ll dp[101];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 1;


        for (int i=4; i<=n; i++)
        {
            dp[i] = dp[i-2] + dp[i-3];
        }

        cout << dp[n] << '\n';

        memset(dp, 0, sizeof(dp));
    }

    return 0;
}