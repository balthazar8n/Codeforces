#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    if (m >= a && m >= b) {
        if (2 * m - a - b >= c) {
            cout << a + b + c << endl;
        } else {
            cout << 2 * m << endl;
        }
    } else if (m >= a) {
        if (m - a >= c) {
            cout << a + m + c << endl;
        } else {
            cout << 2 * m << endl;
        }
    } else if (m >= b) {
        if (m - b >= c) {
            cout << b + m + c << endl;
        } else {
            cout << 2 * m << endl;
        }
    } else {
        cout << 2 * m << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
