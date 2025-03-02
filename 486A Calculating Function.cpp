#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2 << endl;
    } else {
        cout << - (n / 2 + 1) << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
