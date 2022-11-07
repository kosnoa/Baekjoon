#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    vector<int> v(5);
    int avg = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < 5; i++)
    {

        if (v[i] < 40)
        {
            avg += 40;
        }
        else
        {
            avg += v[i];
        }
    }

    cout << avg/5 << '\n';

    return 0;
}