#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    int a[n], b = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b += a[i];
    }

    if (b == n * x) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
