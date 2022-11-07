#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void tower(int n, int start, int to, int bypass)
{
	if (n == 1)
	{
		cout << start << ' ' << to << '\n';
	}
	else
	{
		tower(n - 1, start, bypass, to);
		cout << start << ' ' << to << '\n';
		tower(n - 1, bypass, to, start);
	}
}


int main()
{
	int n;
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	tower(n, 1, 3, 2);

}