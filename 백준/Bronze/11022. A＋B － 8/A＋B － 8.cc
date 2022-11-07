#include <cstdio>
#include <iostream>
using namespace std;


int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a;
	cin >> a;
	int b[100], c[100];

	for (int i = 1; i <= a; i++)
	{
		cin >> b[i] >> c[i];
	}
	for (int i = 1; i <= a; i++)
	{
		cout << "Case #" << i << ": " << b[i] << " + " << c[i] << " = " << b[i] + c[i] << "\n";
	}

	return 0;
}