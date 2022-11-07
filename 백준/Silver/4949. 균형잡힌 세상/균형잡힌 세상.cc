#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (1)
    {
        string t;
        getline(cin, t);

        if (t.size() == 1 && t[0] == '.')
        {
            break;
        }
        bool check_Line = false;
        stack<char> check;
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == '(' || t[i] == '[')
            {
                check.push(t[i]);
            }
            else if (t[i] == ')')
            {
                if (check.size() > 0 && check.top() == '(')
                {
                    check.pop();
                }
                else
                {
                    check_Line = true;
                    break;
                }
            }
            else if (t[i] == ']')
            {
                if (check.size() > 0 && check.top() == '[')
                {
                    check.pop();
                }
                else
                {
                    check_Line = true;
                    break;
                }
            }
        }
        if (check.empty() && !check_Line)
        {
            cout << "yes" << '\n';
        }
        else 
        {
            cout << "no" << '\n';
        }
    }

    return 0;
}

