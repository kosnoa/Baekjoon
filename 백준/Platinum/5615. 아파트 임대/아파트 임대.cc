/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

/*
int 범위의 N
을 판별하기 위해서는 a = 2, 7, 61 세 수만 통과하면
N을 소수라고 할 수 있고, long long 범위의 N을 판별하기 위해서는
37까지의 소수들에 대해서만 통과하면 N을 소수라고 할 수 있다고 알려져 있다.
*/

int n, ans;
llu miller_base[] = {2, 7, 61};

llu power(llu x, llu y, llu mod)
{
    llu res = 1;
    x %= mod;
    while (y)
    {
        if (y & 1)
        {
            res = (res * x) % mod;
        }
        y >>= 1;
        x = (x * x) % mod;
    }

    return res;
}

bool miller(llu p, llu a)
{
    if (a % p == 0)
    {
        return true;
    }
    llu k = p - 1;
    while (1)
    {
        llu temp = power(a, k, p);
        if (temp == p - 1)
        {
            return true;
        }

        if (k & 1)
        {
            return (temp == 1 || temp == p - 1);
        }
        k >>= 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;
    llu p;

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        p = p * 2 + 1;
        for (int j = 0; j < 3; j++)
        {
            if (!miller(p, miller_base[j]))
            {
                ans++;
                break;
            }
        }
    }

    cout << n - ans << endl;

    return 0;
}