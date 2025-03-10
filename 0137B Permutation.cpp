#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    set<int> s;
    int a = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t <= n) {
            s.insert(t);
        }
    }

    cout << n - s.size() << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
