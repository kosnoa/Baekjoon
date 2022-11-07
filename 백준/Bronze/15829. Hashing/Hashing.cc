#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll L;
string alphabets;
ll M = 1234567891;
ll R = 31;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll answer = 0;

    cin >> L;
    cin >> alphabets;

    for (ll i = 0; i < L; i++)
    {
        char alphabet = alphabets[i];
        alphabet -= ('a' - 1);
        ll r = 1;
        for (int j = 1; j <= i; j++)
        {
            r *= 31;
            if (r > M)
            {
                r = r % M;
            }
        }
        answer += (ll)alphabet * r;
        if (answer > M)
        {
            answer = answer % M;
        }
    }
    cout << answer << '\n';

    return 0;
}
