/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    ll a, b, cnt=0;
    cin >> a >> b;

    cnt = (a+b)*(a-b);

    cout << cnt << '\n';
    return 0;
}