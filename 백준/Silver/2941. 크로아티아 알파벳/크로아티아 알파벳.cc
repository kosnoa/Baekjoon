#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main()
{
	string s;
	int count = 0;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'c')
		{
			if (s[i + 1] == '=')
			{
				count++;
				i++;
			}
			else if (s[i + 1] == '-')
			{
				count++;
				i++;
			}
			else
			{
				count++;
				continue;
			}
		}
		else if (s[i] == 'd')
		{
			if (s[i + 1] == '-')
			{
				count++;
				i++;
			}
			else if (s[i + 1] == 'z')
			{
				if (s[i + 2] == '=')
				{
					count++;
					i += 2;
				}
				else if (s[i + 2] != '=')
				{
					count += 2;
					i++;
				}
			}
			else
			{
				count++;
				continue;
			}
		}
		else if (s[i] == 's')
		{
			if (s[i + 1] == '=')
			{
				count++;
				i++;
			}
			else
			{
				count++;
				continue;
			}
		}
		else if (s[i] == 'l')
		{
			if (s[i + 1] == 'j')
			{
				count++;
				i++;
			}
			else
			{
				count++;
				continue;
			}
		}
		else if (s[i] == 'n')
		{
			if (s[i + 1] == 'j')
			{
				count++;
				i++;
			}
			else
			{
				count++;
				continue;
			}
		}
		else if (s[i] == 'z')
		{
			if (s[i + 1] == '=')
			{
				count++;
				i++;
			}
			else
			{
				count++;
				continue;
			}
		}
		else
		{
			count++;
		}

	}


	cout << count << '\n';

	return 0;
}
