/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    ll n;
    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        cin.clear();
        cout << i << ". " << s << '\n';
    }

    return 0;
}