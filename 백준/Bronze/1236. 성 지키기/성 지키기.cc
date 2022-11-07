/* Code By kosnoa
GitHub : kosnoa */


#pragma GCC optimize("Ofast")
#pragma GCC ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
char arr[51][51];
int row[51], col[51];
int n, m;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'X')
            {
                col[i] = 1;
                row[j] = 1;
            }
        }
    }

    int cnt=0;
    for (int i=0; i<m; i++)
    {
        if(row[i] == 0)
        {
            cnt++;
        }
    }

    int cnt2 = 0;
    for (int i=0; i<n; i++)
    {
        if(col[i] == 0)
        {
            cnt2++;
        }
    }
    
    cout << max(cnt, cnt2) << '\n';

    


    return 0;
}