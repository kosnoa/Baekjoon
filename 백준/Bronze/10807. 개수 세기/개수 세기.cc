#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int arr[202];

int main()
{
    memset(arr, 0, sizeof(arr));

    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        arr[num+100]++;
    }

    int res;
    cin >> res;

    cout << arr[res+100] << '\n';

    return 0;
}