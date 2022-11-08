/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int arr[1001];
int n, p, res;

void calc(int k)
{
    if (++arr[k] <= 2)
    {
        calc(k * n % p);
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> p;

    calc(n);

    for (int i=0; i<p; i++)
    {
        if(arr[i] >= 2)
        {
            res++;
        }
    }

    cout << res << '\n';

    return 0;
}