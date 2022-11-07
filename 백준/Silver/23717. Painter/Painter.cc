#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
int A[1000005];

void solve()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int n;
	cin >> n;
	vector<char> v;
	int count[3][2] = {0};
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		char a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < n; i++)
	{
		if (v[i] == 'U')
		{
			count[0][0] = 0;
			count[1][0] = 0;
			count[2][0] = 0;
		}
		else if (v[i] == 'R')
		{
			if (count[0][0] == 0)
			{
				count[0][1]++;
			}

			count[0][0]++;
			count[1][0] = 0;
			count[2][0] = 0;
		}
		else if (v[i] == 'Y')
		{
			if (count[1][0] == 0)
			{
				count[1][1]++;
			}

			count[1][0]++;
			count[0][0] = 0;
			count[2][0] = 0;
		}
		else if (v[i] == 'B')
		{
			if (count[2][0] == 0)
			{
				count[2][1]++;
			}

			count[2][0]++;
			count[0][0] = 0;
			count[1][0] = 0;
		}
		else if (v[i] == 'O')
		{
			if (count[0][0] == 0 && count[1][0] != 0)
			{
				count[0][1]++;
			}
			else if (count[1][0] == 0 && count[0][0] != 0)
			{
				count[1][1]++;
			}
			else if (count[0][0] == 0 && count[1][0] == 0)
			{
				count[0][1]++;
				count[1][1]++;
			}

			count[0][0]++;
			count[1][0]++;
			count[2][0] = 0;
		}
		else if (v[i] == 'P')
		{
			if (count[0][0] == 0 && count[2][0] != 0)
			{
				count[0][1]++;
			}
			else if (count[2][0] == 0 && count[0][0] != 0)
			{
				count[2][1]++;
			}
			else if (count[0][0] == 0 && count[2][0] == 0)
			{
				count[0][1]++;
				count[2][1]++;
			}

			count[0][0]++;
			count[2][0]++;
			count[1][0] = 0;
		}
		else if (v[i] == 'G')
		{
			if (count[1][0] == 0 && count[2][0] != 0)
			{
				count[1][1]++;
			}
			else if (count[2][0] == 0 && count[1][0] != 0)
			{
				count[2][1]++;
			}
			else if (count[1][0] == 0 && count[2][0] == 0)
			{
				count[1][1]++;
				count[2][1]++;
			}

			count[1][0]++;
			count[2][0]++;
			count[0][0] = 0;
		}
		else if (v[i] == 'A')
		{
			if (count[0][0] == 0 && count[1][0] != 0 && count[2][0] != 0)
			{
				count[0][1]++;
			}
			else if (count[1][0] == 0 && count[0][0] != 0 && count[2][0] != 0)
			{
				count[1][1]++;
			}
			else if (count[2][0] == 0 && count[0][0] != 0 && count[1][0] != 0)
			{
				count[2][1]++;
				
			}
			else if (count[0][0] == 0 && count[1][0] == 0 && count[2][0] != 0)
			{
				count[0][1]++;
				count[1][1]++;
			}
			else if (count[0][0] == 0 && count[2][0] == 0 && count[1][0] != 0)
			{
				count[0][1]++;
				count[2][1]++;
			}
			else if (count[2][0] == 0 && count[1][0] == 0 && count[0][0] != 0)
			{
				count[2][1]++;
				count[1][1]++;
			}
			else if (count[0][0] == 0 && count[1][0] == 0 && count[2][0] == 0)
			{
				count[0][1]++;
				count[1][1]++;
				count[2][1]++;
			}

			count[0][0]++;
			count[2][0]++;
			count[1][0]++;
		}
	}
	ans = count[0][1] + count[1][1] + count[2][1];

	printf("%d\n", ans);
}

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		printf("Case #%d: ", i);
		solve();
	}

	return 0;
}