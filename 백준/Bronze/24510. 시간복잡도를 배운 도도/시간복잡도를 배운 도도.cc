#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

string word1 = "for";
string word2 = "while";

int forCount(string &s)
{
    int res = 0;
    int n = s.length();
    int m = word1.length();

    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (s[i + j] != word1[j])
            {
                break;
            }
        }

        if (j == m)
        {
            res++;
        }
    }

    return res;
}

int whileCount(string &s)
{
    int res = 0;
    int n = s.length();
    int m = word2.length();

    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (s[i + j] != word2[j])
            {

                break;
            }
        }

        if (j == m)
        {
            res++;
        }
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;
    int max = 0;

    while (n--)
    {
        string s;
        cin >> s;

        int cnt = 0;

        cnt += forCount(s);
        cnt += whileCount(s);
       

        if (cnt > max)
        {
            max = cnt;
        }
    }

    cout << max << '\n';

    return 0;
}