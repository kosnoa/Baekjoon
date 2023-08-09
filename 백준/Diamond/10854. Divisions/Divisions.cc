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

/*
n의 약수 구하기
*/

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
    ll miller_base[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
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

void ans(ll p)
{
    vector<ll> res;
    pollard(p, res);
    sort(res.begin(), res.end());
    vector<ll> vec = res;
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    ll val = 1;

    /*
    res는 소인수분해 되어있음.
    숫자의 upper랑 lower bound 구해서 그 차이로 수 x 가 몆개 있는지 구하기.
    약수 구하는 공식 (a+1) * (b+1) * ... (z + 1) 사용하기
    */

    for (int i = 0; i < vec.size(); i++)
    {
        auto x = lower_bound(res.begin(), res.end(), vec[i]);
        auto y = upper_bound(res.begin(), res.end(), vec[i]);

        auto t = y - x;
        val *= (t + 1);
    }

    cout << val;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;

    if (n == 1)
    {
        cout << "1\n";
        return 0;
    }

    ans(n);

    return 0;
}