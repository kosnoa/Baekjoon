/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
char arr[101][101];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, col = 0, row = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int tmp = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == '.')
            {
                tmp++;
            }
            else
            {
                tmp = 0;
            }

            if (tmp == 2)
            {
                row++;
            }
        }
    }


    for (int i = 0; i < n; i++)
    {
        int tmp = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] == '.')
            {
                tmp++;
            }
            else
            {
                tmp = 0;
            }

            if (tmp == 2)
            {
                col++;
            }
        }
    }

    cout << row << ' ' << col << '\n';

    return 0;
}