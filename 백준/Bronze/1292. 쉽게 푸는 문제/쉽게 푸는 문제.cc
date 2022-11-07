#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;
vector<int> v(1001);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ans = 0, idx = 0;
    cin >> n >> m;

    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 0; j < i && idx < 1000; j++)
        {
            v[idx++] = i;
        }
    }

    for (int i = n - 1; i <= m - 1; i++)
    {
        ans += v[i];
    }

    cout << ans << '\n';

    return 0;
}