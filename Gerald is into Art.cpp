#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    bool f = false;

    if (a1 >= max(b2, b3) && b1 >= a2 + a3) {
        f = true;
    } else if (a1 >= max(b2, a3) && b1 >= a2 + b3) {
        f = true;
    } else if (a1 >= max(a2, a3) && b1 >= b2 + b3) {
        f = true;
    } else if (a1 >= max(a2, b3) && b1 >= a3 + b2) {
        f = true;
    } else if (b1 >= max(b2, b3) && a1 >= a2 + a3) {
        f = true;
    } else if (b1 >= max(b2, a3) && a1 >= a2 + b3) {
        f = true;
    } else if (b1 >= max(a2, a3) && a1 >= b2 + b3) {
        f = true;
    } else if (b1 >= max(a2, b3) && a1 >= a3 + b2) {
        f = true;
    }

    if (f) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
