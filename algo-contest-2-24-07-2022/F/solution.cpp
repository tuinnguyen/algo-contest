#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    vector <int> cnt(26, 0);
    for (int i = 0; i < n; ++i) {
        if (cnt[s[i] - 'a'] == 0) {
            cnt[s[i] - 'a'] = i + 1;
        }
    }
    for (int i = 1; i < 26; ++i)
        for (int j = 0; j <= i - 1; ++j) {
            if ((cnt[i] != 0 and cnt[j] > cnt[i]) or (cnt[j] == 0 and cnt[i] > 0)) {
                cout << "NO\n";
                return 0;
            }
        }
    cout << "YES\n";

    return 0;
}