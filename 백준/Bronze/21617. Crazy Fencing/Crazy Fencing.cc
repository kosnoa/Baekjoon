#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;
    vector<double> w(n + 1);
    vector<double> h(n);
    double ans = 0;

    for (int i = 0; i < n + 1; i++)
    {
        cin >> w[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    for (int i = 0; i < n; i++)
    {
        ans += (h[i] * (w[i] + w[i + 1])) / 2;
        
    }

    cout << fixed;
    cout.precision(5);
    cout << ans << '\n';

    return 0;
}