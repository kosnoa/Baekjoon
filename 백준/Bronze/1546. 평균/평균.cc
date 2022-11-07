#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int a;
	cin >> a; 
	vector<double> v;
	int s;
	double arr[1000];
	double avg = 0;

	for (int i = 0; i < a; i++)
	{
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end());

	
	for (int i = 0; i < a; i++)
	{
		
		arr[i] = (v.at(i) * 100 / v.back());
	}

	for (int i = 0; i < a; i++)
	{
		avg += arr[i];
	}

	cout << avg / a << "\n";


	return 0;
}