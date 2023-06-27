#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    vector<int> D(n);

    for (int i=0; i<n; i++)
    {
        D[i] = 1;
    }

    for (int i=1; i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            if (v[j] >= v[i])
            {
                continue;
            }
            
            D[i] = max(D[i], D[j]+1);
        }
    }

    cout << *max_element(D.begin(), D.end()) << '\n';
    
    return 0;
}