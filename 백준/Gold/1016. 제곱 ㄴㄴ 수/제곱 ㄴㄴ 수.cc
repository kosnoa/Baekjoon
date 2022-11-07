/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int arr[1000001];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    ll min, max;
    cin >> min >> max;
    ll cnt=0;

    for (ll i=2; i*i<=max; i++)
    {
        ll n = min / (i*i);

        if (min % (i*i))
        {
            n++;
        }

        while (n*i*i<=max)
        {
            arr[n*i*i - min] = 1;
            n++;
        }
    }

    for (int i=0; i<=max -min; i++)
    {
        if(arr[i] == 0)
        {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}