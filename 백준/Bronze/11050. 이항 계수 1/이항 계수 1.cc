#include <bits/stdc++.h>
using namespace std;

int Factorial(int num)
{
	if (num==0 || num==1)
	{
		return 1;
	}
	else
	{
		return Factorial(num-1) * num;
	}
	
}


int main()
{
	int n, k;
	cin >> n >> k;
	cout << Factorial(n) /  (Factorial(k) * Factorial(n-k));

	return 0;
}
