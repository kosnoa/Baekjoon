/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

char arr[1001][1001];
bool visited[1001][1001];
int n, perimeter, area;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void dfs(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= n || arr[x][y] == '.')
    {
        perimeter++;
        return;
    }
    else if (visited[x][y])
    {
        return;
    }

    visited[x][y] = true;
    area++;
    for (int i = 0; i < 4; i++)
    {
        dfs(x + dx[i], y + dy[i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int maxArea = 0, minPer = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == '#' && !visited[i][j])
            {
                dfs(i, j);

                if (area > maxArea)
                {
                    maxArea = area;
                    minPer = perimeter;
                }
                else if (area == maxArea)
                {
                    minPer = min(minPer, perimeter);
                }
            }
            area = 0, perimeter = 0;
        }
    }

    cout << maxArea << ' ' << minPer;

    return 0;
}