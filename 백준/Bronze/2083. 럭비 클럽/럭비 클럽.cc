/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    while(1)
    {
        int a, w;
        string s;
        cin >> s >> a >> w;

        if (s == "#" && a == 0 && w == 0)
        {
            break;
        }
        else
        {
            if (a > 17 || w >= 80)
            {
                cout << s << " Senior" << '\n';
            }
            else
            {
                cout << s << " Junior" << '\n';
            }
        }
    }

    return 0;
}