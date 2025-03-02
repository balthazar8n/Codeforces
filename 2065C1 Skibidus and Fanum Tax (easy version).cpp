#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int c = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (min(a[i], b[0] - a[i]) >= c) {
            a[i] = min(a[i], b[0] - a[i]);
            c = a[i];
        } else if (max(a[i], b[0] - a[i]) >= c) {
            a[i] = max(a[i], b[0] - a[i]);
            c = a[i];
        } else {
            cout << "NO" << endl;
            return;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
