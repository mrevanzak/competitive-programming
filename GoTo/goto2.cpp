#include <iostream>
#include <vector>
using namespace std;

int T;
int N, M;
vector<vector<char>> grid;
string word;
int count = 0;

void searchWord(int x, int y, int dx, int dy, int idx) {
    if (idx == word.size()) {
        count++;
        return;
    }
    if (x < 0 || x >= N || y < 0 || y >= M) return;
    if (grid[x][y] != word[idx]) return;
    searchWord(x + dx, y + dy, dx, dy, idx + 1);
}

int main() {
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> N >> M;
        grid.clear();
        grid.resize(N, vector<char>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> grid[i][j];
            }
        }
        cin >> word;
        count = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                for (int dx = -1; dx <= 1; dx++) {
                    for (int dy = -1; dy <= 1; dy++) {
                        if (dx == 0 && dy == 0) continue;
                        searchWord(i, j, dx, dy, 0);
                    }
                }
            }
        }
        cout << "Case " << t << ": " << count << endl;
    }
    return 0;
}

// https://onecompiler.com/cpp/3yvfhzugk