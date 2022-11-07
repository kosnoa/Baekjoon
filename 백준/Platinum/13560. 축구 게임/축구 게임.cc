#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;
int a[100000];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, s=0;
    bool check = false; 

    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);

    for (int i=0; i<n; i++)
    {
        s += a[i];

        if (s < (i+1)*i/2)
        {
            printf("-1");
            check = true;
            break;
        }
    }

    if (check == false)
    {
        printf("%d", s == n*(n-1)/2 ? 1 : -1);
    }
    


    return 0;
}
