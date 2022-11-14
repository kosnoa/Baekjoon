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

    string s;
    cin >> s;
    int cnt = 0;
    while (s.size() != 1)
    {
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            sum += int(s[i]) - 48;
        }
        s = to_string(sum);
        cnt++;
    }
    
    cout << cnt << '\n';
    if (s == "3" || s == "6" || s == "9")
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}