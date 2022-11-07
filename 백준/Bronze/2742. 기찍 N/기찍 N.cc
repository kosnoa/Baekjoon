#include <cstdio>
#include <iostream>
using namespace std;


int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a;
	cin >> a;
	int b = 0;
	b = a;
	
	for (int i = 1; i <= b; i++)
	{
		cout << a << '\n';
		a--;
	}

	return 0;
}