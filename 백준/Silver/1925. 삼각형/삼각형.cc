#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

struct point
{
    int x, y;
};
bool checkLine(point a, point b, point c)
{
    int dxAB = b.x - a.x;
    int dyAB = b.y - a.y;
    int dxAC = c.x - a.x;
    int dyAC = c.y - a.y;
    if (dxAB * dyAC == dyAB * dxAC)
        return true;
    return false;
}
bool checkJungTriangle(point a, point b, point c)
{
    int ab = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
    int ac = (a.x - c.x) * (a.x - c.x) + (a.y - c.y) * (a.y - c.y);
    int bc = (b.x - c.x) * (b.x - c.x) + (b.y - c.y) * (b.y - c.y);
    if (ab == ac && ab == bc)
        return true;
    return false;
}
bool checkTwoLenght(point a, point b, point c)
{
    int ab = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
    int ac = (a.x - c.x) * (a.x - c.x) + (a.y - c.y) * (a.y - c.y);
    int bc = (b.x - c.x) * (b.x - c.x) + (b.y - c.y) * (b.y - c.y);
    if (ab == ac || ab == bc || ac == bc)
        return true;
    return false;
}
int dot(int x1, int y1, int x2, int y2)
{
    return x1 * x2 + y1 * y2;
}

int main()
{
    point a, b, c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    if (checkLine(a, b, c))
        cout << "X" << endl;
    else if (checkJungTriangle(a, b, c))
        cout << "JungTriangle" << endl;
    else if (checkTwoLenght(a, b, c))
    {
        if (dot(b.x - a.x, b.y - a.y, c.x - a.x, c.y - c.y) < 0)
            cout << "Dunkak2Triangle" << endl;
        else if (dot(a.x - b.x, a.y - b.y, c.x - b.x, c.y - b.y) < 0)
            cout << "Dunkak2Triangle" << endl;
        else if (dot(a.x - c.x, a.y - c.y, b.x - c.x, b.y - c.y) < 0)
            cout << "Dunkak2Triangle" << endl;
        else if (dot(b.x - a.x, b.y - a.y, c.x - a.x, c.y - c.y) == 0)
            cout << "Jikkak2Triangle" << endl;
        else if (dot(a.x - b.x, a.y - b.y, c.x - b.x, c.y - b.y) == 0)
            cout << "Jikkak2Triangle" << endl;
        else if (dot(a.x - c.x, a.y - c.y, b.x - c.x, b.y - c.y) == 0)
            cout << "Jikkak2Triangle" << endl;
        else
            cout << "Yeahkak2Triangle" << endl;
    }
    else
    {
        if (dot(b.x - a.x, b.y - a.y, c.x - a.x, c.y - c.y) < 0)
            cout << "DunkakTriangle" << endl;
        else if (dot(a.x - b.x, a.y - b.y, c.x - b.x, c.y - b.y) < 0)
            cout << "DunkakTriangle" << endl;
        else if (dot(a.x - c.x, a.y - c.y, b.x - c.x, b.y - c.y) < 0)
            cout << "DunkakTriangle" << endl;
        else if (dot(b.x - a.x, b.y - a.y, c.x - a.x, c.y - c.y) == 0)
            cout << "JikkakTriangle" << endl;
        else if (dot(a.x - b.x, a.y - b.y, c.x - b.x, c.y - b.y) == 0)
            cout << "JikkakTriangle" << endl;
        else if (dot(a.x - c.x, a.y - c.y, b.x - c.x, b.y - c.y) == 0)
            cout << "JikkakTriangle" << endl;
        else
            cout << "YeahkakTriangle" << endl;
    }
    return 0;
}
