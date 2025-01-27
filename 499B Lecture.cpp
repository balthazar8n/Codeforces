#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n, m;
    cin >> n >> m;

    map <string, string> a;
    string b, c, d;

    for (int i = 0; i < m; i++) {
        cin >> b >> c;
        if (b.length() > c.length()) {
            a[b] = c;
        } else {
            a[b] = b;
        }
    }

    for (int i = 0; i < n; i++) {
        cin >> d;
        cout << a[d] << " ";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
