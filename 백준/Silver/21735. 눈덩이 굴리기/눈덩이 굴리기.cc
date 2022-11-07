/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int arr[100];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    queue<pair<int, pair<int, int>>> qpp;
    // 위치, 크기, 시간
    qpp.push({0, {1, 0}});
    int res = 0;

    while (!qpp.empty())
    {
        int loc = qpp.front().first;         
        int size = qpp.front().second.first; 
        int time = qpp.front().second.second; 
        if (loc == n || time == m)
        {
            if (res < size)
            {
                res = size;
            }
        }
        qpp.pop();
        if (loc + 1 <= n && time + 1 <= m)
        {
            qpp.push({loc + 1, {size + arr[loc + 1], time + 1}});
        }

        if (loc + 2 <= n && time + 1 <= m)
        {
            qpp.push({loc + 2, {size / 2 + arr[loc + 2], time + 1}});
        }
    }
    cout << res;

    return 0;
}