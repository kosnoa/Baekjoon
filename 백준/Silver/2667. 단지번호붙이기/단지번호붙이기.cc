/* Code By kosnoa
GitHub: kosnoa */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int arr[25][25];
bool visited[25][25];
int res[25 * 25];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n = 0, c = 0;

void DFS(int x, int y)
{
    res[c]++;             // 단지에 몇개의 아파트가 있는지 확인하는 코드
    visited[x][y] = true; // 이 위치에 방문 했다는걸 표기

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i]; // nx ny는 시계 방향으로 방문하지 않은 좌표 찾기
        int ny = y + dy[i];

        if (0 <= nx && nx < n && 0 <= ny && ny < n) // 범위를 벗어난 좌표인지 확인
        {
            if (arr[nx][ny] == 1 && visited[nx][ny] == false) // 방문하지 않은 좌표일 경우
            {
                DFS(nx, ny); // 재귀로 보낸다
            }
        }
    }
}

int main()
{

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%1d", &arr[i][j]); // int 정수형을 한 글자씩 공백없이 연속해 입력받을 수 있다.
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1 && visited[i][j] == false)
            {
                c++;
                DFS(i, j);
            }
        }
    }

    cout << c << '\n';
    
    sort(res + 1, res + c + 1);
    
    for (int i = 1; i <= c; i++)
    {
        cout << res[i] << '\n';
    }

    return 0;
}