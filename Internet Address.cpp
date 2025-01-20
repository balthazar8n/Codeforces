#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    string p, d;

    int x = 0;
    for (int i = 0; i <= 3; i++) {
        if (s[i] == 'p') {
            x = i;
            p += s[i];
            break;
        }
        p += s[i];
    }

    d += s[x + 1];

    for (int i = x + 2; i + 1 < s.length(); i++) {
        if (s[i] == 'r' && s[i + 1] == 'u') {
            x = i + 2;
            break;
        }
        d += s[i];
    }

    if (p.length() + d.length() + 2 == s.length()) {
        cout << p + "://" + d + ".ru" << endl;
    } else {
        cout << p + "://" + d + ".ru" + "/";
        for (int i = x; i < s.length(); i++) {
            cout << s[i];
        }
        cout << endl;
    }

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}