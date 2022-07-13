#include <bits/stdc++.h>

using namespace std;

int main() {
    int queries;
    cin >> queries;
    while (queries--) {
        int n, ans = 0;
        cin >> n;
        vector < int > a(n);
        for (int &item: a)
            cin >> item;

        for (int i = 0; i < n; ++i)
            if (a[i] > i + 1)
                ans = max(ans, a[i] - i - 1);
        cout << ans << "\n";
    }
    return 0;
}