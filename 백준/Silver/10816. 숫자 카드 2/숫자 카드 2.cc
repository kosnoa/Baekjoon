#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, k, h, x, y;

    cin >> t;
    vector<int> v(t);

    for (int i=0; i<t; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    cin >> t;

    vector<int> answer(t);

    for (int i=0; i<t; i++)
    {
        cin >> k;
        auto upper = upper_bound(v.begin(), v.end(), k);
        auto lower = lower_bound(v.begin(), v.end(), k);

        answer[i] = upper - lower;
    }

    for (auto n : answer)
    {
        cout << n << ' ';
    }




    return 0;
}