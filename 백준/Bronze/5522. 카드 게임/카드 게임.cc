#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5];
    int ans=0;

    for (int i=0; i<5; i++)
    {
        cin >> arr[i];
    }

    for (int i=0; i<5; i++)
    {
        ans += arr[i];
    }

    cout << ans << '\n';



    return 0;
}