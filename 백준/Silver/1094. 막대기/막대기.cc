/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;

    while (n > 0)
    {
        if (n & 1)
        {
            cnt++;
        }

        n >>= 1;
    }

    cout << cnt << endl;

    return 0;
}