/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
vector<string> v;
bool check[51][51];
int n, m, c;

void dfs1(int y, int x)
{
    check[y][x] = true;

    int nx = x + 1;

    if (nx >= 0 && nx < m)
    {
        if (v[y][nx] == '-' && !check[y][nx])
        {
            dfs1(y, nx);
        }
    }
}

void dfs2(int y, int x)
{
    check[y][x] = true;

    int ny = y + 1;

    if (ny >= 0 && ny < n)
    {
        if (v[ny][x] == '|' && !check[ny][x])
        {
            dfs2(ny, x);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;

    v = vector<string>(n);

    for (auto &i : v)
    {
        cin >> i;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '-' && !check[i][j])
            {
                c++;
                dfs1(i, j);
            }
        }
    }

    fill(&check[0][0], &check[50][51], false);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '|' && !check[i][j])
            {
                c++;
                dfs2(i, j);
            }
        }
    }

    cout << c << '\n';

    return 0;
}