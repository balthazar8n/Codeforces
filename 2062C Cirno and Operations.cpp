#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int b = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b += a[i];
    }

    vector<int> t = a;
    int c = 0;
    for (int i = 0; i < n - 1; i++) {
        if (t.front() > t.back()) {
            reverse(t.begin(), t.end());
        }

        vector<int> d(t.size() - 1);
        for (int j = 0; j < t.size() - 1; j++) {
            d[j] = t[j + 1] - t[j];
            c += d[j];
        }

        b = max(b, c);
        t = d;
        c = 0;
    }

    cout << b << endl;
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
