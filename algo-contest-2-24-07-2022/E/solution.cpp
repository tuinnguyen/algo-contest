#include <bits/stdc++.h>

using namespace std;

const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

bool inside(int x, int y, const int n, const int m) {
    return (0 <= x and x < n and 0 <= y and y < m);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector < vector < char > > a(n, vector < char > (m));
    for (vector < char > &line: a) {
        for (char &chr: line) {
            cin >> chr;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == 'S') {
                for (int k = 0; k < 4; ++k) {
                    if (inside(i + dx[k], j + dy[k], n, m) and a[i + dx[k]][j + dy[k]] == 'W') {
                        cout << "NO\n";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "YES\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == '.')
                cout << "D";
            else
                cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}