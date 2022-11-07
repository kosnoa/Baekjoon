#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> v(4);

    for (int i=0; i<4; i++)
    {
        cin >> v[i];
    }

    if (v[0] == 8 || v[0] == 9)
    {
        if (v[1] == v[2])
        {
            if (v[3] == 8 || v[3] == 9)
            {
                cout << "ignore" << '\n';
            }
            else
            {
                cout << "answer" << '\n';
            }
        }
        else
        {
            cout << "answer" << '\n'; 
        }
    }
    else
    {
        cout << "answer" << '\n';
    }

    

    return 0;
}