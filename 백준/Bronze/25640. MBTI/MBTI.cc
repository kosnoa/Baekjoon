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

    int cnt=0;
    string s;
    cin >> s;
    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        string tmp;
        cin >> tmp;
        if (tmp == s)
        {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}