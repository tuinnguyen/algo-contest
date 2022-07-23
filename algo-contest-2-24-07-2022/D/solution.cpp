#include <bits/stdc++.h>

using namespace std;

int main() {
    long long sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        sum += temp;
    }
    vector <int> a(n);
    for (int& item: a)
        cin >> item;

    sort(a.begin(), a.end());
    if (sum > a[n - 1] + a[n - 2])
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}