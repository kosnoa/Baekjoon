#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;
int A[1000005];
vector<bool> v(4);

void solve()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

    for (int i=0; i<4; i++)
    {
        v[i] = false;
    }

    int n;
	string s;
    
    cin >> n;
    cin >> s;

    for (int i=0; i<n; i++)
    {
        if ((int)s[i] >= 48 && (int)s[i] <= 57) // 숫자
        {
            v[0] = true;
        }
        else if ((int)s[i] >= 65 && (int)s[i] <= 90) // 대문자
        {
            v[1] = true;
        }
        else if((int)s[i] >= 97 && (int)s[i] <= 122) // 소문자
        {
            v[2] = true;
        }
        else if((int)s[i] == 35 || (int)s[i] == 38 || (int)s[i] == 42 || (int)s[i] == 64) // 특수기호
        {
            v[3] = true;
        }
        
        if (v[0] == true && v[1] == true && v[2] == true && v[3] == true)
        { 
            break;
        }
    }


    if (!v[0])
    {
        s.push_back('1');
    }
    
    if(!v[1])
    {
        s.push_back('A');
    }

    if (!v[2])
    {
        s.push_back('a');
    }

    if (!v[3])
    {
        s.push_back('#');
    }

    if (s.size() < 7)
    {
        for (int i=s.size(); i<7; i++)
        {
            s.push_back('1');
        }
    }

    cout << s << '\n';
    

}

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i)
	{
		cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}