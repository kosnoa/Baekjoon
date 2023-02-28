/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int arr[1004001];

void prime()
{
    for (int i = 2; i <= 1004000; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i <= sqrt(1004000); i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }

        for (int j = i * i; j <= 1004000; j += i)
        {
            arr[j] = 0;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;

    prime();


    for (int i = n; i <= 1004000; i++)
    {
        if (i >= 930 && i <= 10300)
        {
            i = 10300;
            continue;
        }

        if (i >= 98690 && i <= 1003000)
        {
            i = 1003000;
            continue;
        }

        if (arr[i] == 0)
        {
            continue;
        }

        string regular = to_string(i);
        string flip = regular;
        reverse(flip.begin(), flip.end());
        bool check = false;

        for (int i = 0; i < regular.size(); i++)
        {
            if (regular[i] != flip[i])
            {
                check = true;
                break;
            }
        }

        if (!check)
        {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}