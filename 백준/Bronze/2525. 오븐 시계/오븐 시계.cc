#include <bits/stdc++.h>
using namespace std;
int main(){
    int h, m, t;
    cin >> h >> m >> t;
    m += t;
    while (m >= 60){
        m -= 60;
        h++;
    }
    if (h >= 24)
        h -= 24;
    cout << h << ' ' << m << '\n';
    return 0;
}