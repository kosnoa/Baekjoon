#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, m, imp, cnt;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cnt = 0;
        cin >> n >> m;

        priority_queue<int> pq;
        queue<pair<int, int>> q;

        for (int j = 0; j < n; j++)
        {
            cin >> imp;
            q.push({j, imp});
            pq.push(imp);
        }

        while (!q.empty())
        {
            int location = q.front().first;
            int value = q.front().second;
            q.pop();

            if (pq.top() == value)
            {
                pq.pop();
                ++cnt;
                if (m == location)
                {
                    cout << cnt << '\n';
                    break;
                }
            }
            else
            {
                q.push({location, value});
            }
        }
    }

    return 0;
}