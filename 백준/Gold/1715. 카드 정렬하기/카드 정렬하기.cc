#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    if (n == 1)
    {
        cout << 0 << '\n';
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        pq.push(a);
    }

    int ans = 0;

    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        ans += a + b;
        pq.push(a+b);
    }

    cout << ans << '\n';

    return 0;
}