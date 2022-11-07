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

    int s1 = 0, s2 = 0;

    for (int i = 0; i < 4; i++)
    {
        int n;
        cin >> n;
        s1 += n;
    }

    for (int i = 0; i < 4; i++)
    {
        int n;
        cin >> n;
        s2 += n;
    }

    if (s1 < s2)
    {
        cout << s2 << '\n';
    }
    else
    {
        cout << s1 << '\n';
    }

    return 0;
}