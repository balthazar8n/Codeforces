#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n, l, r;
    cin >> n >> l >> r;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int b[r];
    for (int i = 0; i < r; i++) {
        b[i] = a[i];
    }

    sort(b, b + r);

    int d = 0;
    for (int i = 0; i < r - l + 1; i++) {
        d += b[i];
    }

    int c[n - l + 1];

    for (int i = l - 1; i < n; i++) {
        c[i - l + 1] = a[i];
    }

    sort(c, c + n - l + 1);

    int e = 0;
    for (int i = 0; i < r - l + 1; i++) {
        e += c[i];
    }

    cout << min(d, e) << endl;
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
