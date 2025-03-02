#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a[i]; j++) {
            cout << "P";
            if (j != a[i] - 1) {
                if (i == n - 1) {
                    cout << "LR";
                } else {
                    cout << "RL";
                }
            }
        }
        if (i < n - 1) {
            cout << "R";
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
