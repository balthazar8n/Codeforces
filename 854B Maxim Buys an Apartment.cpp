#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n, k;
    cin >> n >> k;

    if (n > k && k > 0) {
        cout << 1 << ' ';
    } else {
        cout << 0 << ' ';
    }

    if (k == 0) {
        cout << 0 << endl;
    } else {
        cout << min(2 * k, n - k) << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
