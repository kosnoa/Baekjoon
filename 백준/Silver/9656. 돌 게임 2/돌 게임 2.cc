/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
bool dp[1001];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    dp[0] = false;
    dp[1] = true;
    dp[2] = false;

    for (int i=3; i<=n; i++)
    {
        dp[i] = !dp[i-1] || !dp[i-3];
    }

    if (dp[n])
    {
        cout << "CY" << '\n';
    }
    else
    {
        cout << "SK" << '\n';
    }

    return 0;
}