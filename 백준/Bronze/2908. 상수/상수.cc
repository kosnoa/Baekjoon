#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	
	int a = 0, b = 0;
	cin >> a >> b;
	int a1 = 0, a2 = 0, a3 = 0, b1 = 0, b2 = 0, b3 = 0;

	a1 = a % 10;
	a2 = ((a - a1) / 10) % 10;
	a3 = a / 100;
	b1 = b % 10;
	b2 = ((b - b1) / 10) % 10;
	b3 = b / 100;

	a = a1 * 100 + a2 * 10 + a3;
	b = b1 * 100 + b2 * 10 + b3;

	if (a > b)
	{
		cout << a;
	}
	else if (a < b)
	{
		cout << b;
	}

    return 0;
}