#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    int c[a + b + 1];
    c[a] = a + b + 1;

    for (int i = 0; i < a; i++) {
        c[i] = i + 1;
    }

    for (int i = a + 1, j = a + b; i < a + b + 1; i++, j--) {
        c[i] = j;
    }

    for (int i = 0; i < a + b + 1; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
