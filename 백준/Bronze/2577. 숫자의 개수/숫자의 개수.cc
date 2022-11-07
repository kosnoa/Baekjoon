#include <cstdio>
#include <iostream>
using namespace std;


int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int a, b, c;
	int arr[10] = {};
	cin >> a >> b >> c;
	int num = a * b * c;

	while (num != 0)
	{
		arr[num % 10] += 1;
		num /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "\n";
	}


	return 0;
}