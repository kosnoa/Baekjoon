/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int arr[200][200];
bool visited[200][200];
int res[200 * 200];
int dy[] = {-1, 1, -2, 2, -1, 1};
int dx[] = {-2, -2, 0, 0, 2, 2};
int n;
queue<pair<int, int>> qp;

void bfs(int x, int y)
{
    arr[x][y] = 0;
    visited[x][y] = true;
    qp.push({x, y});

    while (!qp.empty())
    {
        int x = qp.front().first;
        int y = qp.front().second;

        qp.pop();

        for (int i = 0; i < 6; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (0 <= nx && nx < n && 0 <= ny && ny < n)
            {
                if (!visited[nx][ny])
                {
                    visited[nx][ny] = true;
                    arr[nx][ny] = arr[x][y] + 1;
                    qp.push({nx, ny});
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bfs(a, b);

    if (arr[c][d] == 0)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << arr[c][d] << '\n';
    }

    return 0;
}