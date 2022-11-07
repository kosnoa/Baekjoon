#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void Star(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < num - i; j++)
            cout << " ";
        for (int k = 0; k < 2 * i - 1; k++)
            cout << "*";
        cout << '\n';
    }

    for (int i = 1; i < num; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int k = 0; k < 2 * num - (2 * i + 1); k++)
            cout << "*";
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    Star(n);

    return 0;
}