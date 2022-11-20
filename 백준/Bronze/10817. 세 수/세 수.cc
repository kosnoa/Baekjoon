/* Code By kosnoa
GitHub : kosnoa */


#pragma GCC optimize("Ofast")
#pragma GCC ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    
    for(int i=0; i<3; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    cout << v[1] << '\n';

    return 0;
}