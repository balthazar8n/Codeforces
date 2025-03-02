#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    int c = 0, w = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;

        if (t == 1) {
            if (a > 0) {
                a--;
            } else if (b > 0) {
                b--;
                c++;
            } else if (c > 0) {
                c--;
            } else {
                w++;
            }
        } else if (t == 2 && b > 0) {
            b--;
        } else {
            w += 2;
        }
    }

    cout << w << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
