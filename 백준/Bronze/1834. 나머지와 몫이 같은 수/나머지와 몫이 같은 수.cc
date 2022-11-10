/* Code By kosnoa
GitHub : kosnoa */


#pragma GCC optimize("Ofast")
#pragma GCC ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    llu n;
    cin >> n;

    llu sum=0;

    for (llu i=1; i<n; i++)
    {
        sum += (n+1)*i;
    }

    cout << sum << '\n';

    return 0;
}