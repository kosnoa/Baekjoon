/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
ll n;

ll mul(ll x, ll y, ll mod)
{
    return (__int128)x * y % mod;
}

ll power(ll x, ll y, ll mod)
{
    ll res = 1;
    x %= mod;
    while (y)
    {
        if (y & 1)
        {
            res = mul(res, x, mod);
        }

        y >>= 1;
        x = mul(x, x, mod);
    }

    return res;
}

bool miller(ll p, ll a)
{
    if (a % p == 0)
    {
        return true;
    }

    ll k = p - 1;

    while (1)
    {
        ll temp = power(a, k, p);
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

bool prime(ll p)
{
    if (p == 1 || p % 2 == 0)
    {
        return false;
    }
    ll miller_base[] = {2, 3, 5, 7, 11, 13, 17, 23, 29, 31, 37};
    for (int i = 0; i < 12; i++)
    {
        if (p == miller_base[i])
        {
            return true;
        }

        if (p > 40 && !miller(p, miller_base[i]))
        {
            return false;
        }
    }

    if (p <= 40)
    {
        return false;
    }

    return true;
}

void pollard(ll p, vector<ll> &vec)
{
    // random_device rd;
    // mt19937 gen(rd());
    // uniform_int_distribution<> d1(2, p);
    // uniform_int_distribution<> d2(1, p);

    if (p == 1)
    {
        return;
    }
    if (p % 2 == 0)
    {
        vec.push_back(2);
        pollard(p / 2, vec);
        return;
    }

    if (prime(p))
    {
        vec.push_back(p);
        return;
    }

    ll x, y, z;
    ll d = p;

    auto l = [&](ll a)
    {
        return (z + mul(a, a, p)) % p;
    };

    do
    {
        if (d == p)
        {
            x = y = rand() % (p - 2) + 2;
            z = rand() % 20 + 1;
        }
        x = l(x);
        y = l(l(y));
        d = gcd(abs(x - y), p);
    } while (d == 1);

    pollard(d, vec);
    pollard(p / d, vec);
}

vector<ll> ans(ll p)
{
    vector<ll> res;
    pollard(p, res);
    sort(res.begin(), res.end());

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;

    for (auto i : ans(n))
    {
        cout << i << endl;
    }

    return 0;
}