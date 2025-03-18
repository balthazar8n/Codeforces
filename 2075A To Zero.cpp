#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if (n == k) {
        cout << 1 << endl;
    } else if (n % 2 == 0) {
        cout << (n + k - 2) / (k - 1) << endl;
    } else {
        cout << 1 + (n - 2) / (k - 1) << endl;
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