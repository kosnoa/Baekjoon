#include <bits/stdc++.h>
using namespace std;

int n, m;

void Solve(int n, int m, queue<int> q)
{
    
    printf("<");
    for (int i=0; i<n-1; i++)
    { 
        for (int j=0; j<m-1; j++)
        {
                q.push(q.front());
                q.pop();
        }
        printf("%d, ", q.front());
        q.pop();
    }
    printf("%d>\n", q.front());

    return;
}

int main()
{

    cin >> n >> m;

    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

   Solve (n, m, q);

    return 0;

}