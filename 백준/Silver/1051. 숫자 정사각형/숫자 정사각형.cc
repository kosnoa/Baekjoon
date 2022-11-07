#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n, m, ans=1;
int arr[51][51];
string s;

int main()
{
    cin >> n >> m;
    for (int i=0; i<n; i++)
    {
        cin >> s;
        for (int j=0; j<s.size(); j++)
        {
            arr[i][j] = s[j] - '0';
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            int cnt=0;
            for (int k=1;;k++)
            {
                if ((j+k) >= m || (i+k) >= n)
                {
                    break;
                }

                if (arr[i][j] == arr[i][j+k] && arr[i][j] == arr[i + k][j] && arr[i][j] == arr[i + k][j + k])
                {
                    if (cnt < k)
                    {
                        cnt = k;
                    }
                }
            }
            if ((cnt + 1) > ans)
            {
                ans = cnt + 1;
            } 
        }
    }

    cout << ans * ans << '\n';

    return 0;
}