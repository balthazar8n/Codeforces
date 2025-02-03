#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p') {
            s[i] = 'q';
        } else if (s[i] == 'q') {
            s[i] = 'p';
        }
    }
    cout << s << endl;
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
