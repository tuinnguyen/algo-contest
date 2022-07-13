#include <bits/stdc++.h>

using namespace std;

int main() {
    int queries;
    cin >> queries;

    while (queries--) {
        int n;
        cin >> n;
        vector < int > a(n);
        for (int &item: a)
            cin >> item;

        sort(a.begin(), a.end());

        int val = a[0], ans = 0;
        for (int item: a)
            ans += item - val;

        cout << ans << "\n";
    }
    return 0;
}