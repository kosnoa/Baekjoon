/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

ll dp[41];
ll cnt1, cnt2;

int fibo(int n)
{
    
    if (n==1 or n==2)
    {
        return 1;
    }
    else
    {
        cnt1++;
        return ((fibo(n-1)) + fibo(n-2));
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    fibo(n);

    dp[0] = 1;
    dp[1] = 1;

    for (int i=2; i<n; i++)
    {
        cnt2++;
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    cout << cnt1+1 << ' ' << cnt2 << '\n';

    return 0;
}