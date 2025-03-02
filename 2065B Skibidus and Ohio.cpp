#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            cout << 1 << endl;
            return;
        }
    }

    cout << s.length() << endl;
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
