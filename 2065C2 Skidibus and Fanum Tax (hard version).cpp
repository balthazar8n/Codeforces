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
    sort(b.begin(), b.end());

    int c = INT_MIN;
    for (int i = 0; i < n; i++) {
        int d = INT_MAX;

        if (a[i] >= c) {
            d = min(d, a[i]);
        }

        if (auto it = lower_bound(b.begin(), b.end(), a[i] + c); it != b.end()) {
            if (*it - a[i] >= c) {
                d = min(d, *it - a[i]);
            }
        }

        if (d == INT_MAX) {
            cout << "NO" << endl;
            return;
        } else {
            a[i] = d;
            c = a[i];
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
