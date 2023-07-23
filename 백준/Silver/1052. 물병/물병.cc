/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
ll arr[1001];
ll n, k, res;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> k;

    if (k >= n)
    {
        cout << 0;
        exit(0);
    }

    while (1)
    {
        ll tmp = n, cnt = 0;

        while (tmp)
        {
            if (tmp & 1)
            {
                cnt++;
            }
            tmp >>= 1;
        }

        if (cnt <= k)
        {
            break;
        }

        n++;
        res++;
    }

    cout << res;

    return 0;
}