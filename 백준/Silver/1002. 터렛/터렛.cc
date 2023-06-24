/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int x1, y1, r1, x2, y2, r2, d, cond1, cond2, num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        cond1 = (r1 - r2) * (r1 - r2);
        cond2 = (r1 + r2) * (r1 + r2);

        if (r1 == 0)
        {
            cout << "1" << endl;
            continue;
        }

        if (d == 0)
        {
            if (cond1 == 0)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
        else if (d == cond1 || d == cond2)
        {
            cout << "1" << endl;
        }
        else if (cond1 < d && d < cond2)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}