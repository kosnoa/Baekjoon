/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int arr1[101][101];
int arr2[101][101];
int n, m;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr1[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr2[i][j];
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(arr1[m-i-1][j] != arr2[j][i]) {
                cout << "|>___/|     /}" << endl;
                cout << "| O O |    / }" << endl;
                cout << "( =0= )\"\"\"\"  \\" << endl;
                cout << "| ^  ____    |" << endl;
                cout << "|_|_/    ||__|" << endl;

                exit(0);
            }
        }
    }
    cout << "|>___/|        /}" << endl;
    cout << "| O < |       / }" << endl;
    cout << "(==0==)------/ }" << endl;
    cout << "| ^  _____    |" << endl;
    cout << "|_|_/     ||__|" << endl;

    return 0;
}