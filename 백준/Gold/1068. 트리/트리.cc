#include <bits/stdc++.h>
using namespace std;

int N, Cut;
vector<int> v[55];

int DFS(int curr)
{
	int ret=1;
	int child=0;
	for (auto ch: v[curr])
	{
		if(ch==Cut)
		{
			continue;
		}
		child += DFS(ch);
	}

	if(child)
	{
		return child;
	}
	else
	{
		return ret;
	}
}


int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);    

	cin >> N;
	int root;
	for (int i=0; i<N; i++)
	{
		int parent;
		cin >> parent;
		if(parent==-1)
		{
			root=i;
		}
		else
		{
			v[parent].push_back(i);
		}
	
	}
	cin >> Cut;

	if(root!=Cut)
	{
		cout << DFS(root) << '\n';
	}	
	else
	{
		cout << 0 << '\n';
	}


	return 0;
}
