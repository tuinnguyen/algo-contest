#include <bits/stdc++.h>

using namespace std;

int main() {
    int queries;
    cin >> queries;
    while (queries--) {
        string s;
        cin >> s;
        int n = s.length(), ans = 0;

        set < char > f;
        for (char chr: s) {
            f.insert(chr);
            if ((int)f.size() > 3) {
                ans++;
                f.clear();
                f.insert(chr);
            }
        }
        if (f.empty() == false)
            ans++;
        cout << ans << "\n";
    }
    return 0;
}