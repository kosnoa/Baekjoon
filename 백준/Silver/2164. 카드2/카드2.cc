#include <bits/stdc++.h>
using namespace std;

void Solve(queue<int> q, int n)
{
	for (int i=0; i<n-1; i++)
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front() << '\n';
	return;
}

int main()
{
	int n;
	queue<int> q;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	Solve(q, n);

	return 0;
}