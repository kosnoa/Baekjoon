/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int sum = 91;
    int a, b, c;
    cin >> a >> b >> c;

    sum += a + b*3 + c;

    cout << "The 1-3-sum is " << sum << '\n';

    return 0;
}