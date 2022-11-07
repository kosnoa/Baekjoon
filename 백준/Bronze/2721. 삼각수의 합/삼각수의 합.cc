/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int tri(int n)
{
    return (n * (n + 1)) / 2;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t, n, sum;

    cin >> t;

    while (t--)
    {
        cin >> n;
        sum = 0;

        for (int i = 1; i <= n; i++)
        {
            sum += tri(i+1)*i;
        }

        cout << sum << '\n';
    }

    return 0;
}