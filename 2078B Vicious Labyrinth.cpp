#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    long long int k;
    cin >> k;

    if (k % 2 == 0) {
        for (int i = 1; i < n - 1; i++) {
            cout << n - 1 << " ";
        }
        cout << n << " " << n - 1 << endl;
    } else {
        for (int i = 1; i < n; i++) {
            cout << n << " ";
        }
        cout << n - 1 << endl;
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
