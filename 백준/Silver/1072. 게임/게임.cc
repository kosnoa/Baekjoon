#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
const int N = 1000000000;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    ll x, y;
    cin >> x >> y;

    int z = (y * 100) / x;

    if (z >= 99)
    {
        cout << -1 << '\n';
        return 0;
    }

    int pl = 0, pr = N;
    int result = -1;

    while (pl <= pr)
    {
        int pc = (pl + pr) / 2;
        int temp = (100 * (y + pc)) / (x + pc);

        if (z >= temp)
        {
            result = pc + 1;
            pl = pc + 1;
        }
        else
        {
            pr = pc - 1;
        }
    }

    cout << result << '\n';

    return 0;
}