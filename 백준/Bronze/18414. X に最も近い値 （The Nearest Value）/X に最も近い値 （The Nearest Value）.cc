/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
#define MAX 0x3f3f3f3f // this means infinity
int x, l, r, mindiff = MAX, ans = MAX;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> x >> l >> r;
    for (int i = l; i <= r; i++)
    {
        int diff = abs(i - x);

        if (mindiff > diff)
        {
            ans = i;
            mindiff = diff;
        }
    }

    cout << ans << '\n';

    return 0;
}