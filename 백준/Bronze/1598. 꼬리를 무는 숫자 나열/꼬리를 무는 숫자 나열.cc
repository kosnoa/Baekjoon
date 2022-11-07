/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    n--, k--;

    int a1 = n / 4, a2 = n % 4;
    int b1 = k / 4, b2 = k % 4;

    int res = abs(a1 - b1) + abs (a2 - b2);

    cout << res << '\n';

    return 0;
}