#include <bits/stdc++.h>
using namespace std;

int board[502][502];

void solve()
{
    int n, m, b;
    int mintime = 1e9;
    int maxheight = -1;
    cin >> n >> m >> b;

    for (int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> board[i][j];
        }
    }

    for (int height=0; height <= 256; height++)
    {
        int inven = 0;
        int remove = 0;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                int curheight = board[i][j] - height;
                if (curheight < 0)
                {
                    inven -= curheight;
                }
                else
                {
                    remove += curheight;
                }
            }
        }
        if (remove + b >= inven)
        {
            int time = 2 * remove + inven;
            if (mintime >= time)
            {
                mintime = time;
                maxheight = height;
            }
        }
    }
    cout << mintime << " " << maxheight;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
