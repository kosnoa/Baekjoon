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

    int n, m, k;

    cin >> n >> m >> k;

    int cnt = min(n, m/2 + k);

    cout << cnt << '\n';
    

    return 0;
}