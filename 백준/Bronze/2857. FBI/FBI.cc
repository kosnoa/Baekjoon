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

    vector<int> v;

    for (int i = 1; i <= 5; i++)
    {
        string s;
        cin >> s;

        if (s.find("FBI") != string::npos)
        {
            v.push_back(i);
        }
    }

    if(v.size() == 0)
    {
        cout << "HE GOT AWAY!\n";
        return 0;
    }

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';

    return 0;
}