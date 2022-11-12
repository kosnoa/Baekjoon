/* Code By kosnoa
GitHub : kosnoa */


#pragma GCC optimize("Ofast")
#pragma GCC ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int p, q;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    cin >> p >> q;

    if (p <= 50 && q <= 10)
    {
        cout << "White\n";
    }
    else if(q > 30)
    {
        cout << "Red\n";
    }
    else
    {
        cout << "Yellow\n";
    }
    

    return 0;
}