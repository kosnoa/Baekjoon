#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    /*
    D[n] : n을 제곱수의 합으로 나타낼 때 항의 최소 갯수
    */

    int n;
    cin >> n;

    vector<int> dp(100005);

    for (int i=1; i<=n; i++)
    {
        dp[i] = i;
        for (int j=1; j*j <= i; j++)
        {
            dp[i] = min(dp[i], dp[i-j*j]+1);
        }
    }

    cout << dp[n] << '\n';

    return 0;
}