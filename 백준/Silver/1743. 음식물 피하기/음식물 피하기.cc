/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int arr[101][101];
bool visited[101][101];
int res[100 * 100];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n, m, c;

void dfs(int x, int y)
{
    res[c]++;
    visited[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (0 < nx && nx <= n && 0 < ny && ny <= m)
        {
            if (arr[nx][ny] == 1 && visited[nx][ny] == false)
            {
                dfs(nx, ny);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    memset(arr, 0, sizeof(arr));

    int k;
    cin >> n >> m >> k;

    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == 1 && visited[i][j] == false)
            {
                c++;
                dfs(i, j);
            }
        }
    }

    int max = 0;

    for (int i = 1; i <= c; i++)
    {
        if (res[i] > max)
        {
            max = res[i];
        }
    }

    cout << max << '\n';

    return 0;
}