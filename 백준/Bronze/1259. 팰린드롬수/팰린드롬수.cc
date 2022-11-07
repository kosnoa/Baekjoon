#include <bits/stdc++.h>
using namespace std;

void Solve(string s)
{
	vector<char> v;
	vector<char> v2;
	int count=0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[0] - '0' == 0)
		{
			return;
		}
		else
		{
			v.push_back(s[i]);
			v2.push_back(s[i]);
		}
	}
	reverse(v2.begin(), v2.end());

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] != v2[i])
		{
			cout << "no" << '\n';
			return;
		}
		else
		{
			count++;
		}
	}

	if (count == v.size())
	{
		cout << "yes" << '\n';
		return;
	}

}

int main()
{

	string s;

	while (cin >> s && s[0] - '0' != 0)
	{
		Solve(s);
		s.clear();
	}

	return 0;
}
