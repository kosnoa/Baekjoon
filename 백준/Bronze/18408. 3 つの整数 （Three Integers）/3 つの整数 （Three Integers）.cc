/* Code By kosnoa
GitHub: kosnoa */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int arr[3];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    for (int i=0; i<3; i++)
    {
        int n;
        cin >> n;
        if (n==1)
        {
            arr[0]++;
        }
        else
        {
            arr[1]++;
        }
    }

    if (arr[0] > arr[1])
    {
        cout << "1" << '\n';
    }
    else
    {
        cout << "2" << '\n';
    }
    

    return 0;
}