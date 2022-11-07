#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(void)
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    vector<ll> v;

    while (1)
    {
        for (int i = 0; i < 3; i++)
        {
            ll a;
            cin >> a;
            v.push_back(a);
        }

        if (v[0] == 0 && v[1] == 0 && v[2] == 0)
        {
            return 0;
        }
        else
        {
            sort(v.begin(), v.end());

            ull a, b;
            a = v[0]*v[0];
            b = v[1]*v[1];

            if (sqrt(a+b) == v[2])
            {
                cout << "right" << '\n';
                v.clear();
            }
            else
            {
                cout << "wrong" << '\n';
                v.clear();
            }
        }
    }

    return 0;
}
