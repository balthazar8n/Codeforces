#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    string b = a[0];
    string c;
    int d = 0;

    for (int i = 0; i < n; i++) {
        if (b == a[i]) {
            d++;
        } else {
            c = a[i];
            d--;
        }
    }

    if (d > 0) {
        cout << b << '\n';
    } else {
        cout << c << '\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
