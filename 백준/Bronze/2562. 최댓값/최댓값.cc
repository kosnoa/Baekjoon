#include <cstdio>
#include <iostream>
using namespace std;


int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int n[10];
	int f = 9;
	int max = 0, loc=0;

	for (int i = 1; i <= f; i++)
	{
		cin >> n[i];

		if (n[i] > max)
		{
			max = n[i];
			loc = i;
		}
	}
	
	cout << max << "\n" << loc;

	return 0;
}