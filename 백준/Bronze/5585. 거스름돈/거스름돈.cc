/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, res = 0;
    cin >> n;

    n = 1000 - n;
    res += n / 500;
    n %= 500;
    res += n / 100;
    n %= 100;
    res += n / 50;
    n %= 50;
    res += n / 10;
    n %= 10;
    res += n / 5;
    n %= 5;
    res += n;

    cout << res << '\n';

    return 0;
}