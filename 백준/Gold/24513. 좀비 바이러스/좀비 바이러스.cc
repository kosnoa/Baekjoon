/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

queue<pair<int, int>> qp;
int arr[1000][1000];
int check[1000][1000];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int n, m;

void bfs()
{
    while (!qp.empty())
    {
        pair<int, int> p;
        p = qp.front();
        qp.pop();
        if (arr[p.first][p.second] == 3)
        {
            continue;
        }

        for (int i = 0; i < 4; i++)
        {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if (0 <= nx && nx < n && 0 <= ny && ny < m)
            {
                if (arr[p.first][p.second] == arr[nx][ny])
                    continue;

                if (arr[nx][ny] == 0)
                {
                    arr[nx][ny] = arr[p.first][p.second];
                    check[nx][ny] = check[p.first][p.second] + 1;
                    qp.push({nx, ny});
                }
                else if (check[p.first][p.second] + 1 == check[nx][ny])
                {
                    arr[nx][ny] = 3;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] > 0)
            {
                qp.push({i, j});
            }
        }
    }

    bfs();

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                cnt1++;
            }
            else if (arr[i][j] == 2)
            {
                cnt2++;
            }
            else if (arr[i][j] == 3)
            {
                cnt3++;
            }
        }
    }
    cout << cnt1 << ' ' << cnt2 << ' ' << cnt3 << '\n';
    
    return 0;
}