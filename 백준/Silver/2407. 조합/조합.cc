/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int n, m;
string comb[101][101];

string bigNum(string s1, string s2)
{
    ll sum = 0;
    string res;

    while (!s1.empty() || !s2.empty() || sum)
    {
        if (!s1.empty())
        {
            sum += s1.back() - '0';
            s1.pop_back();
        }

        if (!s2.empty())
        {
            sum += s2.back() - '0';
            s2.pop_back();
        }

        res.push_back((sum % 10) + '0');
        sum /= 10;
    }

    reverse(res.begin(), res.end());

    return res;
}

string combinatronics(int x, int y)
{
    if (x == y || y == 0)
    {
        return "1";
    }

    string &res = comb[x][y];

    if (res != "")
    {
        return res;
    }

    res = bigNum(combinatronics(x - 1, y - 1), combinatronics(x - 1, y));
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;

    cout << combinatronics(n, m) << '\n';

    return 0;
}