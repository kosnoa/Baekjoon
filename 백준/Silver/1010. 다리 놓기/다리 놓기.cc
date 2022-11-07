/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        ll sum = 1;
        int a = 1;
        for (int i = m - n + 1; i <= m; i++)
        {
            sum *= i;
            if (a <= n)
            {
                sum /= a;
                a++;
            }
        }

        cout << sum << '\n';
    }

    return 0;
}