/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int dp[1005];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        dp[0] = 1;
        dp[1] = 2;
        dp[2] = 4;

        for (int i=3; i<n; i++)
        {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }

        cout << dp[n-1] << '\n';
        
        memset(dp, 0, sizeof(dp));
    }

    return 0;
}