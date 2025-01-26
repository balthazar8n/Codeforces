#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n;
    cin >> n;
    string s = to_string(n);

    int a = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '4' || s[i] == '7') {
            a++;
        }
    }

    string t = to_string(a);
    for (int i = 0; i < t.size(); i++) {
        if (t[i] != '4' && t[i] != '7') {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
