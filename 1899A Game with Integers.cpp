#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define DEBUG

void solve() {
    int n;
    cin >> n;

    if (n % 3 == 0) {
        cout << "Second" << endl;
    } else {
        cout << "First" << endl;
    }
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
