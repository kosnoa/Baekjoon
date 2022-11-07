#include<bits/stdc++.h>
using namespace std;

vector<int> v[100001];



int main() {

    int n, x, y;

    cin >> n;

    for (int i = 0; i < n; i++) {

        cin >> x >> y;

        v[y].push_back(x);

    }

    long long cnt = 0;



    for (int i = 1; i <=n; i++) {

        int size = v[i].size();

        if (size > 1) {

            sort(v[i].begin(), v[i].end());

            for (int j = 0; j < size; j++) {

                int a = 1000000001, b = 1000000001;

                if (j + 1 < size) {

                    a = v[i][j + 1] - v[i][j];

                }

                if (j - 1 >= 0) {

                    b = v[i][j] - v[i][j - 1];

                }

                if (a < b) {

                    cnt += a;

                }

                else if (a > b) {

                    cnt += b;

                }

                else if (a == b && a != 1000000001) {

                    cnt += a;

                }

            }

        }

    }

    cout << cnt << endl;

}

