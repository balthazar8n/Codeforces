#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define DEBUG

void solve() {
    int n, m;
    cin >> n >> m;

    set<string> s;
    string p[n], e[m];

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        s.insert(p[i]);
    }

    for (int i = 0; i < m; i++) {
        cin >> e[i];
        s.insert(e[i]);
    }

    if (n > m) {
        cout << "YES" << endl;
    } else if (n == m) {
        if (size(s) % 2 == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
