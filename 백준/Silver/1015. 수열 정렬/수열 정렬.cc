#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, arr[51], p[51];

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int min = 0;

    for (int i=0; i<n; i++)
    {
        int min_val = 1001;
        for (int j=0; j<n; j++)
        {
            if (arr[j] < min_val)
            {
                min_val = arr[j];
                min = j;
            }
        }
        p[min] = i;
        arr[min] = 1001;
    }

    for (int i=0; i<n; i++)
    {
        cout << p[i] << " ";
    }

    

    return 0;
}