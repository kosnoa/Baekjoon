#include <cstdio>
#include <iostream>
using namespace std;


int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, r, a, b, c, d = -1, count = 0;

	cin >> n;
	r = n;

	while (d!=r)
	{
		a = n / 10;
		b = n % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		n = d;
		count++;
	}
	cout << count;
	return 0;
}