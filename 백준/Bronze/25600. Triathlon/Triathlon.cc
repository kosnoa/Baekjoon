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

    int T;
    cin >> T;
    int max = 0;
    while(T--) { 
        int a, d, g;
        cin >> a >> d >> g;
        if (a == d + g)
        {
            int tmp = (a*(d+g)) * 2;

            if (tmp > max)
            {
                max = tmp;
            }
        }
        else
        {
            int tmp = a*(d+g);

            if (tmp > max)
            {
                max = tmp;
            }
        }
    }

    cout << max << '\n';

    return 0;
}