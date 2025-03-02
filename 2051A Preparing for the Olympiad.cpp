#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int c = a[n - 1];
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > b[i + 1]) {
            c += a[i] - b[i + 1];
        }
    }

    cout << c << endl;
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
