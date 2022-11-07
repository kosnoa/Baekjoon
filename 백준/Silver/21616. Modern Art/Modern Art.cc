#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int m, n, q;
    cin >> m >> n >> q;
    vector<int> r(m), c(n);

    for (int i = 0; i < q; i++)
    {
        char a;
        int b;
        cin >> a >> b;
        b--;
        if (a == 'R')
        {
            r[b]++;
        }
        else
        {
            c[b]++;
        }
    }

    int flipped_row = 0;

    for (int i : r)
    {
        if (i % 2 == 1)
        {
            flipped_row++;
        }
    }
    int unflipped_row = m - flipped_row;
    ll result = 0;

    for (int i : c)
    {
        if (i % 2 == 1)
        {
            result += unflipped_row;
        }
        else
        {
            result += flipped_row;
        }
    }

    cout << result << '\n';

    return 0;
}
