/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
ll a, b, res;
bool check[10000001];

void prime()
{
    for (int i = 2; i <= sqrt(b); i++)
    {
        if (check[i])
        {
            continue;
        }

        for (int j = i + i; j <= sqrt(b); j += i)
        {
            check[j] = true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> a >> b;
    prime();

    for (ll i = 2; i <= sqrt(b); i++)
    {
        if (!check[i])
        {
            llu val = i;
            while (1)
            {
                if (val > b / i)
                    break;
                val *= i;
                if (val >= a && val <= b)
                    res++;
            }
        }
    }

    cout << res;

    return 0;
}