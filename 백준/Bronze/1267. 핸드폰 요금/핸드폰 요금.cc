/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int n, y, m;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        y += (a / 30 + 1) * 10;
        m += (a / 60 + 1) * 15;
    }

    if (m < y)
    {
        cout << "M " << m << '\n';
    }
    else if (m > y)
    {
        cout << "Y " << y << '\n';
    }
    else
    {
        cout << "Y M " << m << '\n';
    }

    return 0;
}