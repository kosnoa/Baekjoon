/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

void solve()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    ll l, n, cnt = 0, start = 0;

    cin >> l >> n;

    for (int i = 0; i < n; i++)
    {
        char c;
        ll d;
        cin >> d >> c;

        if (cnt == 0)
        {
            if (c == 'C')
            {
                start += d;

                if (start / l > 0)
                {
                    cnt += start / l;
                    start %= l;
                }
            }
            else if (c == 'A')
            {
                start -= d;

                if (abs(start) / l > 0)
                {
                    cnt += abs(start) / l;
                    start = (abs(start) % l) * (-1);
                }
            }
        }
        else
        {
            if (c == 'C')
            {
                start += d;

                if (abs(start) / l > 0)
                {
                    cnt += abs(start) / l;
                    start = (abs(start) % l);
                }
            }
            else if (c == 'A')
            {
                start -= d;

                if (abs(start) / l > 0)
                {
                    cnt += abs(start) / l;
                    start = (abs(start) % l) * (-1);
                }
            }
        }
    }

    cout << cnt << '\n';
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