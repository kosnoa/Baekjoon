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

    vector<int> v(3);
    for(int i=0; i<3; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << v[2] + v[1] << '\n';

    return 0;
}