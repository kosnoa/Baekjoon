#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


bool wordCheck(string s)
{
	bool alphabet[26] = { false };

	for (int i = 0; i < s.length(); i++)
	{
		if (alphabet[s[i] - 'a'])
		{
			return false;
		}
		else
		{
			char tmp = s[i];
			alphabet[s[i] - 'a'] = true;

			while (1)
			{
				if (tmp != s[++i])
				{
					i--;
					break;
				}
			}
		}
	}
	return true;
}

int main()
{

	int n;
	cin >> n;

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (wordCheck(s))
		{
			count++;
		}
	}

	cout << count;

	return 0;
}