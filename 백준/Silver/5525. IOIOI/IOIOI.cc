/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
string s;
int cnt = 0;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    cin >> s;

    for (int i=0; i<m; i++)
    {
        int num=0;
        if (s[i] == 'O')
        {
            continue;
        }

        while (s[i+1] == 'O' && s[i+2] == 'I')
        {
            num++;

            if (num == n)
            {
                cnt++;
                num--;
            }
            i+=2;
        }
    }

    cout << cnt << '\n';

    return 0;
}