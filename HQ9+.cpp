#include <bits/stdc++.h>
using namespace std;

void solve() {
    string p;
    cin >> p;

    bool f;
    f = false;

    for (int i = 0; i < p.size(); i++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            f = true;
            break;
        }
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