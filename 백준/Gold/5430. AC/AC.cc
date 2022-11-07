#include <bits/stdc++.h>
using namespace std;

int main(void)

{

    ios_base::sync_with_stdio(0);

    cin.tie(0);

    int test_case;

    cin >> test_case;

    for (int t = 0; t < test_case; t++)

    {

        string func;

        cin >> func;

        int N;

        cin >> N;

        string s;

        cin >> s; 

        deque<int> dq; 

        string temp; 

        for (int i = 0; i < s.length(); i++)

            if (s[i] == '[')

                continue;

            else if ('0' <= s[i] && s[i] <= '9')

                temp += s[i];

            else if (s[i] == ',' || s[i] == ']')

            {

                if (!temp.empty())

                {

                    dq.push_back(stoi(temp));

                    temp.clear();
                }
            }

        bool print = true; 

        bool left = true;

        for (int i = 0; i < func.length(); i++)

            if (func[i] == 'R')

                left = !left;

            else

            {

                if (dq.empty())

                {

                    print = false;

                    cout << "error\n";

                    break;
                }

                else

                    if (left)

                    dq.pop_front();

                else

                    dq.pop_back();
            }

        if (print)

        {

            if (left)

            {

                cout << "[";

                while (!dq.empty())

                {

                    cout << dq.front();

                    dq.pop_front();

                    if (!dq.empty())

                        cout << ",";
                }

                cout << "]\n";
            }

            else

            {

                cout << "[";

                while (!dq.empty())

                {

                    cout << dq.back();

                    dq.pop_back();

                    if (!dq.empty())

                        cout << ",";
                }

                cout << "]\n";
            }
        }
    }

    return 0;
}
