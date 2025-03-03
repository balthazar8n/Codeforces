#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if ((i + j) % 2 == 0) {
                if (a[i][j] % 2 == 0) {
                    cout << a[i][j] << " ";
                } else {
                    cout << a[i][j] + 1 << " ";
                }
            } else {
                if (a[i][j] % 2 == 0) {
                    cout << a[i][j] + 1 << " ";
                } else {
                    cout << a[i][j] << " ";
                }
            }
        }
        cout << endl;
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
