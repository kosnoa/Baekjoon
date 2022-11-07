#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;
int A[1000005];

void solve()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int cnt = 0, flag = 1;

    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size(), m = s2.size(), i = 0, j = 0;

    while (i < n && j < m)
    {
        if (s1[i] == s2[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
            cnt++;
        }
    }

    if (i == n)
    {
        cout << cnt + (m - j) << '\n';
    }
    else
    {
        cout << "IMPOSSIBLE" << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}