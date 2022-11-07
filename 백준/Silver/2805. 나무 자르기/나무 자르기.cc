#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll MAX;
int need_treeLen;
ll result;

ll binary_search(vector<ll>& tree, ll start, ll high)
{
    ll mid= (start + high) / 2;
    ll cut_tree = 0;

    if (start > high)
    {
        return result;
    }

    for (size_t i = 0; i < tree.size(); i++)
    {
        if (tree[i] - mid < 0)
        {
            break;
        }
        else
        {
            cut_tree += tree[i] - mid;
        }
    }

    if (cut_tree >= need_treeLen)
    {
        result = result < mid ? mid : result;
    }

    if (cut_tree > need_treeLen)
    {
        return binary_search(tree, mid+1, high);
    }
    else
    {
        return binary_search(tree, start, mid-1);
    }


}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    ll temp = 0;
    cin >> n;
    cin >> need_treeLen;
    vector<ll> tree;
    tree.reserve(n+1);

    for (int i=0; i<n; i++)
    {
        cin >> temp;
        tree.emplace_back(temp);
    }

    sort(tree.rbegin(), tree.rend());
    MAX = tree[0];

    cout << binary_search(tree, 0, MAX) << '\n';

    return 0;

}
