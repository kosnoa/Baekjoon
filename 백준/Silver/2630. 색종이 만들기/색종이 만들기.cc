/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int arr[129][129];
int n, white = 0, blue = 0;

void div_conq(int x, int y, int z)
{
    int tmp = 0;
    for (int i = x; i < x + z; i++)
    {
        for (int j = y; j < y + z; j++)
        {
            if (arr[i][j])
            {
                tmp++;
            }
        }
    }

    if (!tmp)
    {
        white++;
    }
    else if (tmp == z * z)
    {
        blue++;
    }
    else
    {
        div_conq(x, y, z / 2);
        div_conq(x, y + z / 2, z / 2);
        div_conq(x + z / 2, y, z / 2);
        div_conq(x + z / 2, y + z / 2, z / 2);
    }

    return;
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

    div_conq(0, 0, n);
    cout << white << '\n';
    cout << blue << '\n';

    return 0;
}