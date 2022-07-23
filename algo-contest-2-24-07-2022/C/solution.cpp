#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector <int> points(m + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int u, v;
        cin >> u >> v;
        for (int p = u; p <= v; ++p)
            points[p] = 1;
    }
    int count = 0;
    for (int p = 1; p <= m; ++p)
        if (points[p] == 0)
            ++count;
    cout << count << "\n";

    for (int p = 1; p <= m; ++p)
        if (points[p] == 0)
            cout << p << " ";

    return 0;
}