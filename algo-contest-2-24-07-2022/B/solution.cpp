#include <bits/stdc++.h>

using namespace std;

int main() {
    int queries;
    cin >> queries;

    while (queries--) {
        string x;
        cin >> x;
        int digit = x[0] - '0';
        int len = x.length();
        int result = 10 * (digit - 1) + len * (len + 1) / 2;
        cout << result << endl;
    }


    return 0;
}