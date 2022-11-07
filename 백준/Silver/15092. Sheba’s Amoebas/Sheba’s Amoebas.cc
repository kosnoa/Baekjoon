/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

char arr[101][101];
bool visited[101][101];
int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
int n, m, c;

void dfs(int x, int y)
{
    visited[x][y] = true;

    for (int i=0; i<8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (0<=nx && nx < n && 0<=ny && ny < m)
        {
            if (arr[nx][ny] == '#' && visited[nx][ny] == false)
            {
                dfs(nx, ny);
            }
        }

        
    }
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (arr[i][j] == '#' && visited[i][j] == false)
            {
                c++;
                dfs(i, j);
            }
        }
    }

    cout << c << '\n';

    return 0;
}