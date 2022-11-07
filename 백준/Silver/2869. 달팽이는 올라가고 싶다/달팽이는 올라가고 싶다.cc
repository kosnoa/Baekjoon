#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve (int a, int b, int v)
{
	int count=1; 
	
	count += (v-a)/(a-b);

	if((v-a)%(a-b)!=0)
	{
		count++;
	}

	if (a >= v)
	{
		cout << "1";
	}
	else
	{
		cout << count;
	}

}


int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);    

	int a, b, v;
	cin >> a >> b >> v;
	solve(a, b, v);

	return 0;
}
