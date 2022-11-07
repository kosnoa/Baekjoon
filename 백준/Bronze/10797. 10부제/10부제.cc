/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int arr[5];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, cnt=0;
    cin >> n;

    for (int i=0; i<5; i++)
    {
        cin >> arr[i];
    }

    for (int i=0; i<5; i++)
    {
        if (n == arr[i])
        {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}