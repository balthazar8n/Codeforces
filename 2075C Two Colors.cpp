#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int a[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a, a + m);

    long long b = 0;
    for (int i = 1; i < n; i++) {
        b += 1LL * ((a + m) - lower_bound(a, a + m, i)) * ((a + m)
            - lower_bound(a, a + m, n - i)) - ((a + m)
                - lower_bound(a, a + m, max(i, n - i)));
    }

    cout << b << endl;
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