/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
ll n, k;
vector<ll> v;
vector<ll> card;
int arr[500005];

int binary_search(ll target)
{
    ll left = 0;
    ll right = v.size() - 1;
    while (left <= right)
    {
        ll mid = (left+right)/2;

        if (v[mid] == target)
        {
            return 1;
        }

        if (v[mid] < target)
        {
            left = mid + 1;
        }

        if(v[mid] > target)
        {
            right = mid - 1;
        }
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        ll a;
        cin >> a;
        card.push_back(a);
    }

    for (int i = 0; i < k; i++)
    {
        arr[i] = binary_search(card[i]);
    }

    for (int i=0; i<k; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}