#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int>a, pair<int, int>b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}

	return a.second < b.second;
}
    
int main()
{
	vector<pair<int, int>> v;

	int n;
	int x, y;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cin >> y;

		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

	return 0;
}
