#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, ans=0;
    string s;

    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> s;

        for (int j=0; j<s.size(); j++)
        {
            if (s[j]==',')
            {
                continue;
            }
            else
            {
                ans += (s[j]-'0');
            }
        }
        cout << ans << '\n';
        ans=0;
    }



    return 0;
}
