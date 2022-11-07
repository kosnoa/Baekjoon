/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

bool Prime(int n)
{
    int rt;
    rt = sqrt(n);

    if (rt == 1 && n != 1)
    {
        return true;
    }

    if (n%2)
    {
        for (int i=2; i<=rt; i++)
        {
            if (!(n%i))
            {
                return false;
            }
            
            if (i == rt)
            {
                return true;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
    
        for (int i=n/2; i>=2; i--)
        {
            if (Prime(i) && Prime(n-i))
            {
                cout << i << ' ' << n-i << '\n';
                break;
            }
        }
    }

    return 0;
}