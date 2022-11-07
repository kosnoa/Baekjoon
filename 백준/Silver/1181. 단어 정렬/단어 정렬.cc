#include <bits/stdc++.h>
using namespace std;

bool compareWith(string a, string b)
{
    if (a.length() == b.length())
    {
        return a<b;
    }
    return a.length()<b.length();
}


int main()
{
    int N;
    vector<string> v;
    cin >> N;

    for (int i=0; i<N; i++)
    {
        string s;
        cin >> s;
        if(find(v.begin(), v.end(), s) == v.end())
        {
            v.push_back(s);
        }
    }
    sort(v.begin(), v.end(), compareWith);

    for (int i=0; i<v.size(); i++)
    {
        cout << v[i] << '\n';
    }

}


