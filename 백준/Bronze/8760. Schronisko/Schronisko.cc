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

    int T;
    cin >> T;
    while(T--) { 
        int a, b;
        cin >> a >> b;
        cout << (a*b)/2 << '\n';
    }

    return 0;
}