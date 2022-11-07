#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

char *max(char *a, char *b)
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] < b[i])
        {
            return b;
        }

        if (a[i] > b[i])
        {
            return a;
        }
    }
    return a;
}



void subtract(char *a, char *b)
{
    for (int i = 0; i < strlen(b); i++)
    {
        a[i] = a[i] - b[i] + '0';
        if (a[i] < '0')
        {
            a[i] += 10;
            a[i - 1]--;
        }
    }

    for (int i = strlen(b) - 1; i >= 0; i--)
    {
        if (a[i] < '0')
        {
            a[i] += 10;
            a[i - 1]--;
        }
    }
}

void devidesubstract(char *a, char *b, char *r, int idx)
{
    r[idx] = '0';

    while (a[idx - 1] > '0' || max(a + idx, b) == a + idx)
    {
        subtract(a + idx, b);
        ++r[idx];
    }
}

void devide(char *a, char *b, char *r)
{
    int idx = 0;
    int digit = strlen(a) - strlen(b);

    while (idx <= digit)
    {
        devidesubstract(a, b, r, idx++);
    }

    r[idx] = '\0';
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char a[1001];
    char b[1001];
    char r[1001];

    int ri = 0, ai = 0;
    cin >> a >> b;
    devide(a, b, r);

    while (r[ri] == '0')
    {
        ri++;
    }

    while (a[ai] == '0')
    {
        ai++;
    }

    if (r[0] == '\0')
    {
        r[0] == '0';
        r[1] == '\0';
    }

    if (a[ai] == '\0')
    {
        ai--;
    }

    if (r[ri] == '\0')
    {
        ri--;
    }

    cout << r + ri << '\n';
    cout << a + ai << '\n';

    return 0;
}