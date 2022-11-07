#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


void Hanoi(int num, int from, int by, int to)
{
	if (num == 1)
	{
		cout << from << ' ' << to << '\n';
	}
	else
	{
		Hanoi(num - 1, from, to, by);
		cout << from << ' ' << to << '\n';
		Hanoi(num - 1, by, from, to);
	}
}

int main()
{
	int n;
	cin >> n;

	string a = to_string(pow(2, n));

	int x = a.find('.');
	a = a.substr(0, x);
	a[a.length() - 1] -= 1;

	cout << a << '\n';
	
	if (n <= 20)
	{
		Hanoi(n, 1, 2, 3);
	}
	return 0;
}