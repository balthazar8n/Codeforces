#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int a[n];
    pair<int, int> b = {0, 0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] >= b.first) {
            b.first = a[i];
            b.second = i;
        }
    }

    if (k == 1 && b.second != n - 1 && b.second != 0) {
        cout << b.first + max(a[0], a[n - 1]) << endl;
        return;
    }

    sort(a, a + n, greater<int>());

    long long int c = 0;
    for (int i = 0; i < k + 1; i++) {
        c += a[i];
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
