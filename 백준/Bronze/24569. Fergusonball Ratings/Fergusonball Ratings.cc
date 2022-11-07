#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, ans=0;
    cin >> n;

    vector<ll> score(n);
    vector<ll> foul(n);

    for (ll i=0; i<n; i++)
    {
        cin >> score[i];
        cin >> foul[i]; 

        if (score[i]*5 - foul[i]*3 > 40)
        {
            ans++;
        }

    }

    if (ans == n)
    {
        cout << ans << '+' << '\n';
    }
    else
    {
        cout << ans << '\n';
    }
    




    return 0;
}