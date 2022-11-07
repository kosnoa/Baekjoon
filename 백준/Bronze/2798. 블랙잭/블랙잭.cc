#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, g, s = 0;
    int min = 999999;
    int arr[100] = {
        0,
    };
    cin >> n >> t;

    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                s = arr[i] + arr[j] + arr[k];
                if (t - s < min && t - s >= 0)
                {
                    min = t - s;
                    g = s;
                }
            }
        }
    }
    cout << g << '\n';

    return 0;
}
