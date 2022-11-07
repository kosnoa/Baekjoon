#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double d;

bool compare(pair<d, d> a, pair<d, d> b)
{
    return a.first < b.first;
}

int main()
{
    vector<pair<d, d>> v;
    ll n;
    d max=0;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        d a, b;
        cin >> a >> b;
        v.push_back(pair<d, d>(a, b));
    }

    sort(v.begin(), v.end(), compare);

    for (ll i = 1; i < n; i++)
    {
        d a = abs(v[i].first - v[i - 1].first);
        d b = abs(v[i].second - v[i - 1].second);
        d c = b / a;

        if (max < c)
        {
            max = c;
        }
    }

    cout << max << '\n';    

    return 0;
}