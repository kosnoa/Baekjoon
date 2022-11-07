#include <bits/stdc++.h>
using namespace std;


void solve()
{
    unsigned long long N, K, S;
    cin >> N >> K >> S;
    unsigned long long L=0;

    if (K + K-S + N-S < K + N )
    {
        L = K + K-S + N-S;
    }
    else 
    {
        L = K+N;
    }
    printf("%llu\n", L);

}



int main()
{
    int t;
    cin >> t;
    for (int i=1; i<=t; i++)
    {
        printf("Case #%d: ", i);
        solve();
    }

    return 0;
}