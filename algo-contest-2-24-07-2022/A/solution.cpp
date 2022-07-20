#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    vector <string> infoList(n);
    for (string info: infoList)
        cin >> info;
    if (infoList[p - 1] == "Infected")
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}