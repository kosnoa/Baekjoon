#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    string t;

    cin >> s;
    cin >> t;

    int len1 = s.size();
    int len2 = t.size();

    vector<int> v(len2);

    for (int i=0; i<len1; i++)
    {
        for(int j=0; j<len2; j++)
        {
            if(s[i] == t[j])
            {
                if(j==0)
                {
                    v[j]++;
                }
                else if(v[j] < v[j-1])
                {
                    v[j]++;
                }
            }
        }
    }

    cout << v[len2-1];

    return 0;
}