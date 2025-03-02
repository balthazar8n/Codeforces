#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int c = 0, t = n;
    for (int i = 0; i < t; i++) {
        while (c < m && b[c] < a[i]) {
            c++;
        }
        if (c < m) {
            c++;
            n--;
        }
    }

    cout << n << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
