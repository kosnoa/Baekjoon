/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int arr[51][51];
bool visited[51][51];
int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
int w, h;

void dfs(int x, int y)
{
    visited[x][y] = true;

    for (int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (0 <= nx && nx < h && 0 <= ny && ny < w)
        {
            if (arr[nx][ny] == 1 && !visited[nx][ny])
            {
                dfs(nx, ny);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    while (1)
    {
        cin >> w >> h;

        if (w == 0 && h == 0)
        {
            break;
        }
        else
        {
            int c=0;
            for (int i = 0; i < h; i++)
            {
                for (int j = 0; j < w; j++)
                {
                    cin >> arr[i][j];
                }
            }

            for (int i = 0; i < h; i++)
            {
                for (int j = 0; j < w; j++)
                {
                    if (arr[i][j] == 1 && !visited[i][j])
                    {
                        c++;
                        dfs(i, j);
                    }
                }
            }

            cout << c << '\n';
            memset(arr, 0, sizeof(arr));
            memset(visited, false, sizeof(visited));
        }
    }

    return 0;
}