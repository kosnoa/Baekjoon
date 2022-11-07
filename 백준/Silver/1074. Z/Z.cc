/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int n, r, c, ans;

void div_conq(int y, int x, int size)
{
    if (y == r && x == c)
    {
        cout << ans << '\n';
        return;
    }

    if (r < y + size && r >= y && c < x + size && c >= x)
    {
        div_conq(y, x, size / 2);
        div_conq(y, x + size / 2, size / 2);
        div_conq(y + size / 2, x, size / 2);
        div_conq(y + size / 2, x + size / 2, size / 2);
    }
    else
    {
        ans += size*size;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> r >> c;

    div_conq(0, 0, (1 << n));

    return 0;
}