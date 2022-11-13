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

    int T;
    cin >> T;
    while (T--)
    {
        double n;
        string s;
        cin >> n >> s;

        if (s == "kg")
        {
            cout << fixed;
            cout.precision(4);
            cout << n * 2.2046 << " lb\n";
        }
        else if (s == "l")
        {
            cout << fixed;
            cout.precision(4);
            cout << n * 0.2642 << " g\n";
        }
        else if (s == "lb")
        {
            cout << fixed;
            cout.precision(4);
            cout << n * 0.4536 << " kg\n";
        }
        else if (s == "g"){
            cout << fixed;
            cout.precision(4);
            cout << n * 3.7854 << " l\n";
        }
    }

    return 0;
}