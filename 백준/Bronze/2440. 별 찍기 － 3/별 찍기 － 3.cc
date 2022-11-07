#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void ReverseStar (int n)
{
    for (int i=n; i>0; i--)
    {
        for (int j=0; j<i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ReverseStar(n);

    return 0;
}