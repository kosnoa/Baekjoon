#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    priority_queue<int> pq;

    while (n--)
    {
        int a;
        cin >> a;

        if (a == 0)
        {
            if (pq.empty())
            {
                cout << "0" << '\n';   
            }
            else
            {
                cout << pq.top() << '\n';
                pq.pop();

            }
        }
        else
        {
            pq.push(a);
        }
    }

    return 0;
}
