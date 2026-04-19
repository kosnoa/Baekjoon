/* Code By kosnoa, referenced by Park Jonghyeon
https://blog.jonghyeon.me/posts/2023-09-09-boj-1557/
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int mobius[40500];

// Mobius Function 구현
void setup() { 
    mobius[1] = 1;
    for(int i = 1; i < 40500; ++i) {
        for(int j = 2 * i; j < 40500; j += i) {
            mobius[j] -= mobius[i] ;
        }
    }
}

// 1 이상 x 이하에서의 제곱 ㄴㄴ 수 구하기
ll calc(ll x) {  
    ll cnt = 0;
    for(int i = 1; i * i <= x; i++) {
        if(i >= 40500) {
            break;
        }
        cnt += mobius[i] * (x / (i * i)); 
        // x / (i * i)로 1 이상 x 이하 사이 제곱인수가 없는 수들을 확인
    }

    return cnt;
}

void solve(ll k) {
    setup();
    ll left = 0, right = 1e10;
    while (left < right - 1) {
        ll mid = (left + right) / 2;
        ll temp = calc(mid);
        if(temp < k) {
            left = mid;
        } else {
            right = mid;
        }
    }
    cout << right << endl;
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    ll k;
    cin >> k;
    solve(k);

    return 0;
}