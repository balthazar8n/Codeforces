#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = n - 1; i > 0; i--) {
        if (a[i] == a[i - 1]) {
            for (int j = i - 1; j >= 0; j--) {
                if (a[i] == 0) {
                    break;
                } else if (a[i] == a[j]) {
                    a[j]--;
                } else {
                    break;
                }
            }
        }
    }

    long long int b = 0;
    for (int i = 0; i < n; i++) {
        b += a[i];
    }
    cout << b << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
