/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int n;
bool arr[1000005];
int score[1000005];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;
    vector<ll> v(n);

    for (auto& i : v)
    {
        cin >> i;
        arr[i] = true;
    }

    for (int i = 1; i <= 1000005; i++)
    {
        for (int j = i * 2; j <= 1000005; j += i)
        {
            if (arr[i] && arr[j])
            {
                score[i]++, score[j]--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << score[v[i]] << ' ';
    }

    return 0;
}