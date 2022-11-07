/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int dp[16];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    if (n%2==1)
    {
        cout << "0" << '\n';
        return 0;
    }

    dp[0] = 1;
    dp[1] = 3;

    for (int i=2; i<=n/2; i++)
    {
        dp[i] = 4*dp[i-1] - dp[i-2];
    }

    cout << dp[n/2] << '\n';

    return 0;
}