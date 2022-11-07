#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, a;
	int arr[10001] = {0, };
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		arr[a]++;
	}

	for (int i = 0; i < 10001; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			cout << i << '\n';
		}
	}
}