#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> D(n);
    vector<int> s(n);

    for (int i = 0; i < n; i++)
    {
        D[i] = 1;
        s[i] = -1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[j] >= v[i])
            {
                continue;
            }

            // D[i] = max(D[i], D[j]+1);

            if (D[i] < D[j] + 1)
            {
                D[i] = D[j] + 1;
                s[i] = j;
            }
        }
    }

    int max_val = 0, max_idx = -1;

    for (int i = 0; i < n; i++)
    {
        if (max_val < D[i])
        {
            max_val = D[i];
            max_idx = i;
        }
    }

    vector<int> seq;

    while (max_idx != -1)
    {
        seq.push_back(v[max_idx]);
        max_idx = s[max_idx];
    }

    reverse(seq.begin(), seq.end());


    cout << *max_element(D.begin(), D.end()) << '\n';

    for (int i=0; i<seq.size(); i++)
    {
        cout << seq[i] << ' ';
    }

    cout << '\n';

    return 0;
}