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

    while(1)
    {
        int n;
        cin >> n;
        if(n==0)
        {
            break;
        }

        for (int i=1; i<=n; i++)
        {
            for (int j=0; j<i; j++)
            {
                cout << "*";
            }

            cout << '\n';
        }
    }

    return 0;
}