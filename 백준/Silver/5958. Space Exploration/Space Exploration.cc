/* Code By kosnoa
GitHub : kosnoa */


#pragma GCC optimize("Ofast")
#pragma GCC ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1 , 0};
bool check[1005][1005];
string arr[1005];
int n, c;

void dfs(int x, int y)
{
    check[x][y] = true;
    
    for (int i=0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || nx > n || ny < 0 || ny > n)
        {
            continue;
        }

        if(arr[nx][ny] == '*' && !check[nx][ny])
        {
            dfs(nx, ny);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if(arr[i][j] == '*' && !check[i][j])
            {
                c++;
                dfs(i, j);
            }
        }
    }

    cout << c << '\n';

    return 0;
}