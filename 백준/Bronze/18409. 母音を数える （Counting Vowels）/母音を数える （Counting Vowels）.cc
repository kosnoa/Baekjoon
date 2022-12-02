/* Code By kosnoa
GitHub : kosnoa */


#pragma GCC optimize("Ofast")
#pragma GCC ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, cnt=0;
    string s;
    cin >> n >> s;

    for(int i=0; i<n; i++)
    {
        if (s[i] == 'a')
        {
            cnt++;
        }
        else if(s[i] == 'e')
        {
            cnt++;
        }
        else if(s[i] == 'i')
        {
            cnt++;
        }
        else if(s[i] == 'o')
        {
            cnt++;
        }
        else if(s[i] == 'u')
        {
            cnt++;
        }
    }

    cout << cnt << '\n';
    

    return 0;
}