#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;;

int main()
{
	vector <int> v;
	int a = 0;

	for (int i = 0; i < 5; i++)
	{
		int b;
		cin >> b;
		v.push_back(b);
		a += v.at(i) * v.at(i);
	}
	
	cout << a % 10;
	


	return 0;
}