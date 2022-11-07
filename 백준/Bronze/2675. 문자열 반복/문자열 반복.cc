#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    int t;
    cin >> t;
    string a;


    for (int i = 0; i < t; i++)
    {
        int r;
        cin >> r;
        cin >> a;

        for (int j = 0; j < a.length(); j++)
        {
            for (int k = 0; k < r; k++)
            {
                cout << a[j];
            }
        }
        cout << "\n";
    }





    return 0;
}