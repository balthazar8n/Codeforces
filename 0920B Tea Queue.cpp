#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    int t = 1;

    for (int i = 0; i < n; i++) {
        t = max(t, a[i].first);
        if (t <= a[i].second) {
            cout << t << " ";
            t++;
        } else {
            cout << 0 << " ";
        }
    }
    cout << endl;
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
