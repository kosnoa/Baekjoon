/* Code By kosnoa
GitHub : kosnoa */

#pragma GCC optimize("Ofast")
#pragma GCC("unroll-loops")
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int dx[] = {1, 2, -1, -2, -1, -2, 1, 2};
int dy[] = {2, 1, 2, 1, -2, -1, -2, -1};
int n;


bool isValid(int x, int y, vector<vector<int>> &board) {
    return x >= 0 && y >= 0 && x < n && y < n && board[x][y] == -1;
}

int getDegree(int x, int y, vector<vector<int>> &board) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (isValid(nx, ny, board)) {
            count++;

        }
    }
    return count;
}

// Warnsdorff’s rule with slight randomization
bool knightTour(int x, int y, vector<pair<int, int>> &path) {
    vector<vector<int>> board(n, vector<int>(n, -1));
    board[x][y] = 0;
    path.emplace_back(x + 1, y + 1);

    for (int step = 1; step < n * n; ++step) {
        vector<pair<int, int>> nextMoves;
        for (int i = 0; i < 8; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (isValid(nx, ny, board)) {
                nextMoves.emplace_back(getDegree(nx, ny, board), i);
            }
        }

        if (nextMoves.empty()) return false;
        sort(nextMoves.begin(), nextMoves.end());

        bool moved = false;
        for (size_t idx = 0; idx < nextMoves.size(); ++idx) {
            int i = nextMoves[idx].second;
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (isValid(nx, ny, board)) {
                board[nx][ny] = step;
                x = nx; 
                y = ny;
                path.emplace_back(x + 1, y + 1);
                moved = true;
                break;
            }
        }

        if (!moved) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> n >> x >> y;
    x--; y--;

    vector<pair<int, int>> path;
    if (!knightTour(x, y, path)) {
        cout << -1 << ' ' << -1 << '\n';
    } else {
        for (size_t i = 0; i < path.size(); ++i) {
            int a = path[i].first;
            int b = path[i].second;
            cout << a << ' ' << b << '\n';
        }
        
    }

    return 0;
}