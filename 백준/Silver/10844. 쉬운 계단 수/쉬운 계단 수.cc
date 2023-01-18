/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
ll mod = 1000000000;
ll dp[105][10];
ll ans;

/*
1 
2 
3 
4 
5 
6 
7 
8 
9

10 12 
21 23 
32 34 
43 45 
54 56 
65 67 
76 78 
87 89 
98

101 121 123 
210 212 232 234
321 323 343 345
432 434 454 456
543 545 565 567
654 656 676 678
765 767 787 789
876 878 898 
987 989

1010 1012 1210 1212 1232 1234
2101 2121 2123 2321 2323 2343 2345
3210 3212 3232 3234 3432 3434 3454 3456
*/

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= 9; i++)
    {
        dp[1][i] = 1;
    }

    dp[1][0] = 0;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (j == 0)
            {
                dp[i][j] = dp[i - 1][j + 1] % mod;
            }
            else if (j == 9)
            {
                dp[i][j] = dp[i - 1][j - 1] % mod;
            }
            else
            {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % mod;
            }
        }
    }

    for (int i=0; i<=9; i++)
    {
        ans += dp[n][i];
    }

    cout << ans % mod << '\n';

    return 0;
}