#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, r, ans = 0, max = 0;
    ;

    cin >> p >> r;
    vector<int> v(p);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 0; j < p; j++)
        {
            int tmp;
            cin >> tmp;
            v[j] += tmp;
        }
    }

    for (int i = 0; i < p; i++)
    {

        if (v[i] >= max)
        {
            ans = i + 1;
            max = v[i];
        }
    }

    cout << ans << '\n';

    return 0;
}