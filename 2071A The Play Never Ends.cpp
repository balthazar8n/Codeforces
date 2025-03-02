#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int k;
    cin >> k;

    if (k == 2 || k % 3 == 0 || k % 3 == 2) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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
