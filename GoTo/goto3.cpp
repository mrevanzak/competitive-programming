#include <bits/stdc++.h>
using namespace std;

const int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};

int t, n, m, cnt;
char a[105][105];
int vis[105][105], id[105][105];
map<char, int> mp;

void dfs(int x, int y, int c) {
    vis[x][y] = c;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] != '#' && !vis[nx][ny]) {
            dfs(nx, ny, c);
        }
    }
}

int main() {
    cin >> t;
    for (int cas = 1; cas <= t; cas++) {
        cin >> n >> m;
        mp.clear();
        memset(vis, 0, sizeof vis);
        memset(id, 0, sizeof id);
        cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] != '#' && !vis[i][j]) {
                    dfs(i, j, ++cnt);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] != '#' && !id[vis[i][j]]) {
                    id[vis[i][j]] = a[i][j];
                } else if (a[i][j] != '#' && id[vis[i][j]] != a[i][j]) {
                    mp[id[vis[i][j]]]++;
                    id[vis[i][j]] = '.';
                }
            }
        }
        cout << "Case " << cas << ":\n";
        for (auto p : mp) {
            if (p.first != '.') {
                cout << p.first << ' ' << p.second << '\n';
            }
        }
        int contested = 0;
        for (int i = 1; i <= cnt; i++) {
            if (id[i] == '.') {
                contested++;
            }
        }
        cout << "contested " << contested << '\n';
    }
    return 0;
}
