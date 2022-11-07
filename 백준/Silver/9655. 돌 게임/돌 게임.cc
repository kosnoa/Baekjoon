#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;



int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    vector<bool> dp(1005);

    
    dp[0] = false;
    dp[1] = true;
    dp[2] = false;

    for (int i=3; i<=n; i++)
    {
        dp[i] = !dp[i-1] || !dp[i-3];
    }

    if (dp[n])
    {
        cout << "SK" << '\n';
    }
    else
    {
        cout << "CY" << '\n';
    }

    return 0;
}