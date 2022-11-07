#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a=0, b=0;

    for (int i=0; i<3; i++)
    {
        int score;
        cin >> score;
        score *= (3-i);
        a += score;
    }

    for (int i=0; i<3; i++)
    {
        int score;
        cin >> score;
        score *= (3-i);
        b += score;
    }

    if (a>b)
    {
        cout << "A" << '\n';
    }
    else if(a<b)
    {
        cout << "B" << '\n';
    }
    else
    {
        cout << "T" << '\n';
    }
    

    

    return 0;
}