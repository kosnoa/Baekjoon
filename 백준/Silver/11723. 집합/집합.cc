/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int t, bit = 0;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> s;

        if (s == "add")
        {
            cin >> n;
            bit |= (1 << n);
        }
        else if (s == "check")
        {
            cin >> n;
            if (bit & (1 << n))
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (s == "remove")
        {
            cin >> n;
            bit &= ~(1 << n);
        }
        else if (s == "toggle")
        {
            cin >> n;

            if (bit & (1 << n))
            {
                bit &= ~(1 << n);
            }
            else
            {
                bit |= (1 << n);
            }
        }
        else if (s == "all")
        {
            bit = (1 << 21) - 1;
        }
        else if (s == "empty")
        {
            bit = 0;
        }
    }

    return 0;
}