#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, h, w;

    cin >> d >> h >> w;

    cout << (int)(d/sqrt(h*h+w*w)*h) << " " << (int)(d/sqrt(h*h+w*w)*w) << '\n';



    return 0;
}