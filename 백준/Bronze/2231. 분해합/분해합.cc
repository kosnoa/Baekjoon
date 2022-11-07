#include <bits/stdc++.h>
using namespace std;

int part(int a)
{
    int s = a;

    while(a)
    {
        s += a % 10;
        a /= 10;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;

    for (int i=1; i<n; i++)
    {
        int s = part(i);

        if (s==n)
        {
            cout << i << '\n';
            return 0;
        }
        
    }

    cout << 0 << '\n';
}
