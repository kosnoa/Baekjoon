/* Code By kosnoa
GitHub : kosnoa */


#pragma GCC optimize("Ofast")
#pragma GCC ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int n;
vector<ll> v1;
vector<ll> v2;


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;

    for (int i=0; i<n; i++)
    {
        ll tmp;
        cin >> tmp;
        v1.push_back(tmp);
        v2.push_back(tmp);
    }

    sort(v1.begin(), v1.end());
    v1.erase(unique(v1.begin(), v1.end()), v1.end());

    for (int i=0; i<n; i++)
    {
        cout << lower_bound(v1.begin(), v1.end(), v2[i]) - v1.begin() << ' ';
    }

    return 0;
}