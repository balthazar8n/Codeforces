#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool f = true;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            f = false;
        }
    }

    if (f) {
        cout << s[0] << endl;
    } else {
        char a[] = {'B', 'G', 'R'};
        int b = 0;

        for (char i : a) {
            for (int j = 0; j < n; j++) {
                if (s[j] == i) {
                    b++;
                }
            }

            if (b != n - 1) {
                cout << i << "";
            }

            b = 0;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}