#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        vector<string> v;

        for (int j = 1; j <= 12; j++) {
            if (12 % j == 0) {
                int a = 12 / j;

                for (int k = 0; k < a; k++) {
                    bool f = true;

                    for (int l = 0; l < j; l++) {
                        if (s[a * l + k] != 'X') {
                            f = false;
                            break;
                        }
                    }

                    if (f) {
                        v.push_back(to_string(j) + "x" + to_string(a));
                        break;
                    }
                }
            }
        }

        if (v.empty()) {
            cout << 0 << endl;
        } else {
            cout << v.size() << " ";
            for (int m = 0; m < v.size(); m++) {
                cout << v[m];
                if (m < v.size() - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
