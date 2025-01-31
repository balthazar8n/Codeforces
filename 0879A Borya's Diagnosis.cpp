#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n;
    cin >> n;

    vector<int> a(2*n);
    for (int i = 0; i < 2*n; i++) {
        cin >> a[i];
    }

    int b = a[0], c = 0, t = 0;
    for (int i = 2; i < 2*n; i += 2) {
        c = a[i], t = a[i + 1];
        while (c <= b) {
            c += t;
        }
        b = c, c = 0, t = 0;
    }
    cout << b << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
