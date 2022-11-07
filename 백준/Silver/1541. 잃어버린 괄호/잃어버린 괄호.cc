/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
string num = "";
string s;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    
    cin >> s;

    int res = 0;
    
    bool isMinus = false;

    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '\0')
        {
            if (isMinus)
            {
                res -= stoi(num);
            }
            else
            {
                res += stoi(num);
            }

            num = "";

            if (s[i] == '-')
            {
                isMinus = true;
            }
        }
        else
        {
            num += s[i];
        }

    }

    cout << res << '\n';

    return 0;
}