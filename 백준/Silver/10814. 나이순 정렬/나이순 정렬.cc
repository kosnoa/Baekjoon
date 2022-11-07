#include <bits/stdc++.h>
using namespace std;


bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}




int main()
{
	int t;
	cin >> t;
	pair<int, string> tmp;
	vector<pair<int,string>> v;

	for (int i=0; i<t; i++)
	{
		cin >> tmp.first >> tmp.second;
		v.push_back(tmp);
	}
	stable_sort(v.begin(), v.end(), compare);

	for (int i=0; i<t; i++)
	{
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

	return 0;
}



