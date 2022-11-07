/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int n;
bool check;

void star(int cnt)
{
    int m = cnt;

    if (m == n)
    {
        for (int i = 0; i < m; i++)
        {
            cout << '*';
        }
        cout << '\n';
        check = true;
        m--;
        star(m);
    }
    else
    {
        if (!check)
        {
            for (int i = 0; i < m; i++)
            {
                cout << '*';
            }
            cout << '\n';
            m++;
            star(m);
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                cout << '*';
            }
            cout << '\n';
            m--;

            if (m > 0)
            {
                star(m);
            }
            else
            {
                return;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;

    int num = 1;

    star(num);

    return 0;
}