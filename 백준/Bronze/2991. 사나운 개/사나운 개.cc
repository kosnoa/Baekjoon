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

    int a, b, c, d;
    int arr[3];
    int cnt[3] = {0, 0, 0};
    cin >> a >> b >> c >> d;

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        int dog1 = arr[i] % (a + b);
        int dog2 = arr[i] % (c + d);
        if (dog1 <= a && dog1 != 0)
        {
            cnt[i]++;
        }

        if (dog2 <= c && dog2 != 0)
        {
            cnt[i]++;
        }
    }

    for (int i=0; i<3; i++)
    {
        cout << cnt[i] << '\n';
    }

    return 0;
}