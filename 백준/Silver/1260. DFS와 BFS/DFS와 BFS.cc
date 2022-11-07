#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int>e[1001];
bool check[1001];

void dfs(int v)
{
	check[v] = true;
	cout << v << " ";
	for (int i=0; i<e[v].size(); i++)
	{
		int next = e[v][i];
		if(!check[next])
		{
			dfs(next);
		} 
	}
}

void bfs(int v)
{
	queue<int>q;
	q.push(v);
	check[v] = true;
	while(!q.empty())
	{
		int cur = q.front();
		q.pop();
		cout << cur << " ";
		for (int i=0; i<e[cur].size(); i++)
		{
			int next =e[cur][i];
			if(!check[next])
			{
				check[next]=true;
				q.push(next);
			}
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);    

	int n, m, v, from=0, to=0;
	cin >> n >> m >> v;
	for (int i=0; i<m; i++)
	{
		cin >> from >> to;
		e[from].push_back(to);
		e[to].push_back(from);
	}

	for(int i=1; i<=n; i++)
	{
		sort(e[i].begin(), e[i].end());
	}
	dfs(v);
	cout << '\n';
	memset(check,false, sizeof(check));
	bfs(v);

	return 0;
}
