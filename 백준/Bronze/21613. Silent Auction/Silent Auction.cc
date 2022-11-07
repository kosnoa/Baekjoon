#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, bid_value=0, tmp=0;

    cin >> n;

    vector<string> name(101);
    ll bid[101];

    for (int i=0; i<n; i++)
    {
        cin >> name[i];
        cin >> bid[i];
    }

    for (int i=0; i<n; i++)
    {
        if (bid_value < bid[i])
        {
            bid_value = bid[i];
            tmp = i;
        }
    }

    cout << name[tmp] << '\n';


    return 0;
}