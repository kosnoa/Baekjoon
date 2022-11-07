/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

char arr[101][101];
bool visited_white[101][101];
bool visited_black[101][101];
int res_white[100 * 100];
int res_black[100 * 100];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n, m, c1, c2;

void dfs_white(int x, int y)
{
    res_white[c1]++;
    visited_white[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (0 <= nx && nx < n && 0 <= ny && ny < m)
        {
            if (arr[nx][ny] == 'W' && visited_white[nx][ny] == false)
            {
                dfs_white(nx, ny);
            }
        }
    }
}

void dfs_black(int x, int y)
{
    res_black[c2]++;
    visited_black[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (0 <= nx && nx < n && 0 <= ny && ny < m)
        {
            if (arr[nx][ny] == 'B' && visited_black[nx][ny] == false)
            {
                dfs_black(nx, ny);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int sum1 = 0, sum2 = 0;

    cin >> m >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'W' && visited_white[i][j] == false)
            {
                c1++;
                dfs_white(i, j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'B' && visited_black[i][j] == false)
            {
                c2++;
                dfs_black(i, j);
            }
        }
    }

    for (int i = 1; i <= c1; i++)
    {
        sum1 += (res_white[i] * res_white[i]);
    }

    for (int i = 1; i <= c2; i++)
    {
        sum2 += (res_black[i] * res_black[i]);
    }

    cout << sum1 << ' ' << sum2 << '\n';

    return 0;
}
