#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n;
    cin >> n;

    int s = n * (n + 1) / 2;
    int r = sqrt(s);
    if (r * r == s) {
        cout << -1 << endl;
        return;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    int b = 0, t = 0;
    for (int i = 0; i < n - 1; i++) {
        b += a[i];
        r = sqrt(b);
        if (r * r == b) {
            b -= a[i] - a[i + 1];
            t = a[i];
            a[i] = a[i + 1];
            a[i + 1] = t;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
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
