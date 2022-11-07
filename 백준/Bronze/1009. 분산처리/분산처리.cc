#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, c;
    cin >> n;

    while (n--)
    {
        c = 1;
        cin >> a >> b;

        b =! (b % 4) ? 4 : b % 4;

        while (b--)
        {
            c *= a;
        }
        cout << (c % 10 ? c % 10 : 10) << '\n';
    }

    return 0;
}
