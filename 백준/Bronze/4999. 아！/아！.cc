/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    string s1;
    string s2;
    cin >> s1 >> s2;

    if (s1.size() < s2.size())
    {
        cout << "no" << '\n';
    }
    else
    {
        cout << "go" << '\n';
    }

    return 0;
}