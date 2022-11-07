#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 201;
#define Moduler 1000000000;

int N, K;
ll DP[201][201];

void Input()
{
    cin >> N >> K;
}

void Solution()
{
    for (int i = 0; i < N; i++)
    {
        DP[1][i] = 1;
    }

    for (int i = 0; i <= N; i++)
    {
        DP[1][i] = 1;
    }

    for (int k = 2; k <= K; k++)
    {
        for (int n = 0; n <= N; n++)
        {
            for (int i = 0; i <= n; i++)
            {
                DP[k][n] = DP[k][n] + DP[k - 1][i];
            }
            DP[k][n] = DP[k][n] % Moduler;
        }
    }

    cout << DP[K][N] << '\n';
}

void Solve()
{
    Input();
    Solution();
}

int main()
{
    ios_base::sync_with_stdio, cin.tie(nullptr), cout.tie(nullptr);

    Solve();

    return 0;
}