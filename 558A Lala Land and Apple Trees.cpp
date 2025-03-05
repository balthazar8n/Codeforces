#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    unordered_map<int, int> c;
    vector<int> d;
    vector<int> e;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        c[a] = b;
        if (a < 0) {
            d.push_back(a);
        } else {
            e.push_back(a);
        }
    }

    sort(d.rbegin(), d.rend());
    sort(e.begin(), e.end());

    int f = min(d.size(), e.size());
    int g = 0;

    for (int i = 0; i < f; i++) {
        g += c[d[i]] + c[e[i]];
    }

    if (d.size() < e.size()) {
        g += c[e[f]];
    } else {
        g += c[d[f]];
    }

    cout << g << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
