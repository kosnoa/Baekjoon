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

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[1005];
        double p = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            p += arr[i];
        }

        p /= n;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > p)
            {
                res++;
            }
        }

        double tmp = 100 * res / n;

        cout << fixed;
        cout.precision(3);
        cout << round(1000 * tmp) / 1000 << "%\n";
    }

    return 0;
}