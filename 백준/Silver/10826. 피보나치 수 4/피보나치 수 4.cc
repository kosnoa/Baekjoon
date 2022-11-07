/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

string dp[10005];

string sum(string x, string y)
{
    int num;
    int tmp=0;
    string res;

    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    while (x.length() < y.length())
    {
        x+='0';
    }

    while (x.length() > y.length())
    {
        y += '0';
    }

    for (int i=0; i<x.length(); ++i)
    {
        num = (x[i]-'0' + y[i]-'0' + tmp) % 10;
        res += to_string(num);
        tmp = (x[i]-'0' + y[i]-'0' + tmp) / 10;
    }

    if (tmp!=0)
    {
        res += to_string(tmp);
    }

    reverse(res.begin(), res.end());

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    dp[0] = '0';
    dp[1] = '1';
 
    for (int i=2; i<=n; i++)
    {
        dp[i] = sum(dp[i-1], dp[i-2]);
    }

    cout << dp[n] << '\n';

    return 0;
}