#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif

char grid[1005][1005];
int vis[1005][1005];

pair<int, int> parent[1005][1005];
char dirFrom[1005][1005];

void solve() {
    int N, M;
    cin >> N >> M;

    // vector<vector<char>> grid(N, vector<char>(M, 0));
    int sx, sy, ex, ey;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                sx = i;
                sy = j;
            }
            if (grid[i][j] == 'B') {
                ex = i;
                ey = j;
            }
        }
    }

    int dx[] = {-1, 0, +1, 0};
    int dy[] = {0, +1, 0, -1};
    string move = "URDL";

    queue<pair<pair<int, int>, string>> q;
    // vector<vector<int>> vis(N, vector<int>(M, 0));
    memset(vis, 0, sizeof(vis));
    q.push({{sx, sy}, ""});

    while (!q.empty()) {
        int X = q.front().first.first;
        int Y = q.front().first.second;
        string p = q.front().second;

        q.pop();
        // vis[X][Y] = 1;

        for (int i = 0; i < 4; i++) {
            int nX = dx[i] + X;
            int nY = dy[i] + Y;
            char dir = move[i];
            if (nX < N && nX >= 0 && nY < M && nY >= 0 && !vis[nX][nY] &&
                (grid[nX][nY] == '.' || grid[nX][nY] == 'B')) {
                q.push({{nX, nY}, p + dir});

                if (nX == ex && nY == ey) {
                    cout << "YES" << endl;
                    cout << p.size() + 1 << endl << p + dir;
                    return;
                }
                vis[nX][nY] = 1;
            }
        }
    }

    cout << "NO" << endl;
}

void solveOptimized() {
    int N, M;
    cin >> N >> M;

    // vector<vector<char>> grid(N, vector<char>(M, 0));
    int sx, sy, ex, ey;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                sx = i;
                sy = j;
            }
            if (grid[i][j] == 'B') {
                ex = i;
                ey = j;
            }
        }
    }

    int dx[] = {-1, 0, +1, 0};
    int dy[] = {0, +1, 0, -1};
    string move = "URDL";

    queue<pair<int, int>> q;
    // vector<vector<int>> vis(N, vector<int>(M, 0));
    memset(vis, 0, sizeof(vis));
    q.push({sx, sy});

    vis[sx][sy] = 1;
    while (!q.empty()) {
        int X = q.front().first;
        int Y = q.front().second;

        q.pop();
        // vis[X][Y] = 1;

        for (int i = 0; i < 4; i++) {
            int nX = dx[i] + X;
            int nY = dy[i] + Y;
            char dir = move[i];
            if (nX < N && nX >= 0 && nY < M && nY >= 0 && !vis[nX][nY] &&
                (grid[nX][nY] == '.' || grid[nX][nY] == 'B')) {
                parent[nX][nY] = {X, Y};
                dirFrom[nX][nY] = move[i];
                q.push({nX, nY});
                vis[nX][nY] = 1;

                if (nX == ex && nY == ey) {
                    break;
                }
            }
        }
    }

    if (!vis[ex][ey]) {
        cout << "NO" << endl;
        return;
    }

    string path = "";
    int cx = ex, cy = ey;

    while (cx != sx || cy != sy) {
        path += dirFrom[cx][cy];
        int px = parent[cx][cy].first;
        int py = parent[cx][cy].second;
        cx = px;
        cy = py;
    }
    reverse(path.begin(), path.end());
    cout << "YES" << endl << path.size() << endl << path << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;

    while (t--) {
        solveOptimized();
    }
}
