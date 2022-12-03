#include <bits/stdc++.h>
using namespace std;

bool twoN(int num)
{
    int result = num & (num - 1);

    if (num == 1)
    {
        return false;
    }
    else
    {
        if (result == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    double a, b, c;
    double x1, x2;
    double d;

    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        if ((x1 - (int)x1) != 0 || (x2 - (int)x2) != 0)
        {
            cout << "둘다틀렸근" << '\n';
        }
        else
        {
            if (twoN(x1) == true && twoN(x2) == true)
            {
                cout << "이수근" << '\n';
            }
            else
            {
                cout << "정수근" << '\n';
            }
        }
    }
    else
    {
        cout << "둘다틀렸근" << '\n';
    }

    return 0;
}
