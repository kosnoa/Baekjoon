#include <bits/stdc++.h>
#define INF 1000000000

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
int dp[503][503];
vector<int> row(503);
vector<int> col(503);

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> row[i] >> col[i];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k = i + j;

            if (k >= n)
            {
                break;
            }

            int res = INF;

            for (int l=j; l<k; l++)
            {
                res = min(res, dp[j][l] + dp[l+1][k] + row[j]*col[l]*col[k]);
            }

            dp[j][k] = res;
        }
    }

    cout << dp[0][n-1] << '\n';

    return 0;
}