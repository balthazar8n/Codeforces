#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, t;
    cin >> n >> t;

    vector<int> a(n + 1);
    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }

    int b = 1;
    while (b < n) {
        if (b == t) {
            cout << "YES" << endl;
            return;
        }
        b += a[b];
    }

    if (b == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
