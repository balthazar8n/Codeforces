#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    string s;
    cin >> s;

    int a = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            a++;
        }
    }

    cout << a << endl;
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
