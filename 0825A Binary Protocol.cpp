#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int a = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            a++;
        } else if (s[i] == '0') {
            if (a != 0) {
                cout << a;
                a = 0;
            } else {
                cout << a;
            }
        }
    }
    cout << a << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
