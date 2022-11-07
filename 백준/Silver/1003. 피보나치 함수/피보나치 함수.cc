#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long fiboarr[50] = { 0, 1, };

long long fibo(int n)
{
	if (n == 0 || n == 1)
	{
		return fiboarr[n];
	}
	else if (fiboarr[n] == 0)
	{
		fiboarr[n] = fibo(n - 1) + fibo(n - 2);
	}
	return fiboarr[n];
}

int main()
{
	int t;
	cin >> t;
	int tmp;
	for (int i = 0; i < t; i++)
	{
		cin >> tmp;
		if (tmp == 0)
		{
			cout << "1 0" << '\n';
		}
		else
		{
			cout << fibo(tmp - 1) << ' ' << fibo(tmp) << '\n';
		}
	}
}